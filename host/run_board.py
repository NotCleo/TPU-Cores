#!/usr/bin/env python3
"""Drive the whole benchmark on the Arty A7 over the single USB cable.

  python3 run_board.py --port /dev/ttyUSB1 [--push-fw] [--outdir out]

Prereqs: bitstream programmed (vivado/program.tcl), image prepared
(prepare_image.py [--image photo.jpg]), firmware built (make -C ../fw).

Sequence:
  1. (--push-fw) feed firmware.bin to the boot ROM ("FWLD" protocol);
     press the red RESET button first, or use --dtr-reset if JP2 is shorted
  2. 'V' ping, 'K' kernels, 'I' image (checksums verified)
  3. 'C' generic CPU run, 'F' optimized CPU run, 'T' TPU run (cycle counts)
  4. 'R' download both results; verify CPU == TPU == golden bit-exact
  5. print the metrics table (latency, speedup, GOPS, PSNR), save PNGs

Note: the Arty enumerates two ttyUSB devices; the UART is the *second*
(usually /dev/ttyUSB1). The first is JTAG -- leave it to Vivado.
"""

import argparse
import struct
import sys
import time

import numpy as np
import serial
from PIL import Image

import golden

OPS_PER_IMAGE = 240 * 240 * 2 * 9 * 2   # px * kernels * taps * (mul+add)


def get4(s):
    b = s.read(4)
    assert len(b) == 4, f"serial timeout (got {len(b)}/4 bytes)"
    return struct.unpack("<I", b)[0]


def expect_d(s, cmd):
    b = s.read(1)
    assert b == b"D", f"command {cmd!r}: expected 'D', got {b!r}"


def upload(s, cmd, payload):
    s.write(cmd + struct.pack("<I", len(payload)))
    s.write(payload)
    expect_d(s, cmd)
    chk = get4(s)
    want = sum(payload) & 0xFFFFFFFF
    assert chk == want, f"{cmd!r} checksum {chk:#x} != {want:#x}"


def push_firmware(s, fw_path, dtr_reset):
    fw = open(fw_path, "rb").read()
    if dtr_reset:
        s.dtr = False; time.sleep(0.05)
        s.dtr = True;  time.sleep(0.05)
        s.dtr = False
    print("waiting for boot ROM banner (press the red RESET button now)...")
    s.timeout = 20
    banner = s.read_until(b"BOOT\n")
    assert banner.endswith(b"BOOT\n"), "no BOOT banner -- is the bitstream loaded?"
    s.write(b"FWLD" + struct.pack("<I", len(fw)) + fw +
            struct.pack("<I", sum(fw) & 0xFFFFFFFF))
    resp = s.read_until(b"\n")
    assert b"OKGO" in resp, f"bootloader said {resp!r}"
    app = s.read_until(b"TPU MAGIC ok\n")
    print(app.decode(errors="replace"), end="")
    s.timeout = 10


def download(s, src):
    s.write(b"R" + bytes([src]))
    expect_d(s, "R")
    n = get4(s)
    data = b""
    while len(data) < n:
        chunk = s.read(n - len(data))
        assert chunk, f"timeout downloading result ({len(data)}/{n})"
        data += chunk
    return np.frombuffer(data, dtype=np.uint8).reshape(240, 240)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--port", default="/dev/ttyUSB1")
    ap.add_argument("--baud", type=int, default=230400)
    ap.add_argument("--fclk", type=float, default=100e6)
    ap.add_argument("--outdir", default="out")
    ap.add_argument("--push-fw", action="store_true")
    ap.add_argument("--fw", default="../fw/build/firmware.bin")
    ap.add_argument("--dtr-reset", action="store_true",
                    help="pulse DTR to reset (requires JP2 shorted)")
    args = ap.parse_args()

    img = np.fromfile(f"{args.outdir}/image.bin", dtype=np.uint8)
    assert img.size == golden.W_PAD * golden.H_PAD, "run prepare_image.py first"
    kern = open(f"{args.outdir}/kernel.bin", "rb").read()
    gold = np.fromfile(f"{args.outdir}/golden_int.bin", dtype=np.uint8).reshape(240, 240)
    ref_f = np.asarray(Image.open(f"{args.outdir}/golden_float.png"), dtype=np.float64)

    s = serial.Serial(args.port, args.baud, timeout=10)
    time.sleep(0.2)

    if args.push_fw:
        push_firmware(s, args.fw, args.dtr_reset)

    s.reset_input_buffer()
    s.write(b"V")
    expect_d(s, "V")
    print("board:", s.read_until(b"\n").decode(errors="replace").strip())

    print("uploading kernels (72 B) + image (58,564 B)...")
    t = time.time()
    upload(s, b"K", kern)
    upload(s, b"I", img.tobytes())
    print(f"  uploaded + verified in {time.time() - t:.2f} s")

    def run(cmd, nvals):
        t0 = time.time()
        s.write(cmd)
        expect_d(s, cmd)
        vals = [get4(s) for _ in range(nvals)]
        print(f"  {cmd.decode()} done in {time.time() - t0:.2f} s wall")
        return vals

    print("running CPU (generic dynamic-kernel)...")
    (c_gen,) = run(b"C", 1)
    print("running CPU (hand-optimized sliding window)...")
    (c_fast,) = run(b"F", 1)
    print("running TPU...")
    t_copy, t_run, t_hw = run(b"T", 3)

    print("downloading results...")
    out_cpu = download(s, 0)
    out_tpu = download(s, 1)
    Image.fromarray(out_cpu).save(f"{args.outdir}/board_cpu.png")
    Image.fromarray(out_tpu).save(f"{args.outdir}/board_tpu.png")

    exact_ct = np.array_equal(out_cpu, out_tpu)
    exact_g = np.array_equal(out_tpu, gold)
    psnr_f = golden.psnr(out_tpu, ref_f)

    ms = lambda cyc: 1000.0 * cyc / args.fclk
    gops = lambda cyc: OPS_PER_IMAGE / (cyc / args.fclk) / 1e9
    t_total = t_copy + t_run

    print()
    print("=" * 66)
    print(f"{'engine':<34}{'cycles':>12}{'ms':>9}{'GOPS':>8}")
    print("-" * 66)
    print(f"{'CPU generic (rv32im, same math)':<34}{c_gen:>12,}{ms(c_gen):>9.2f}{gops(c_gen):>8.3f}")
    print(f"{'CPU optimized (sliding window)':<34}{c_fast:>12,}{ms(c_fast):>9.2f}{gops(c_fast):>8.3f}")
    print(f"{'TPU end-to-end (copy-in + run)':<34}{t_total:>12,}{ms(t_total):>9.2f}{gops(t_total):>8.3f}")
    print(f"{'  copy-in (CPU writes 58KB)':<34}{t_copy:>12,}{ms(t_copy):>9.2f}")
    print(f"{'  compute (rdcycle around run)':<34}{t_run:>12,}{ms(t_run):>9.2f}{gops(t_run):>8.3f}")
    print(f"{'  compute (TPU hw counter)':<34}{t_hw:>12,}{ms(t_hw):>9.2f}{gops(t_hw):>8.3f}")
    print("-" * 66)
    print(f"speedup vs CPU generic   : {c_gen / t_total:6.1f}x end-to-end, "
          f"{c_gen / t_run:6.1f}x compute")
    print(f"speedup vs CPU optimized : {c_fast / t_total:6.1f}x end-to-end, "
          f"{c_fast / t_run:6.1f}x compute")
    print(f"correctness: TPU==CPU {'BIT-EXACT' if exact_ct else 'MISMATCH!'}, "
          f"TPU==golden {'BIT-EXACT' if exact_g else 'MISMATCH!'}")
    print(f"PSNR vs float sqrt-magnitude reference: {psnr_f:.2f} dB")
    print("=" * 66)
    if not (exact_ct and exact_g):
        sys.exit(1)


if __name__ == "__main__":
    main()
