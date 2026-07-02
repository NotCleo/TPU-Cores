# How to run this project — step by step

Two parts. **Part A works right now, with no board** — it produces every number
on the CV (cycles, speedup, GOPS, PSNR, utilization, timing, power). **Part B**
is for the day the Arty A7-100T arrives; it repeats the same benchmark on real
hardware over one USB cable.

> Run all commands from the `sobel-tpu/` folder unless said otherwise.
> One-time setup: `pip install -r host/requirements.txt`

---

## Part A — everything without the board

### Step 1. Prepare the image
Turns any photo into what the hardware eats: grayscale, 240×240, padded to
242×242, saved as raw bytes. Also computes the "golden" expected output that
every later step is checked against.
```bash
cd host
python3 prepare_image.py --image /home/amrut/Pictures/Camera/1.jpg
python3 kernels.py
cd ..
```
You get `host/out/image.bin` (for the board), `image.hex` (for simulation),
`golden_int.bin/png` (the exact expected result), `golden_float.png` (quality
reference). No `--image`? A built-in test pattern is used.

### Step 2. Test the TPU by itself
Runs the real accelerator RTL in a simulator, feeds it your image over its AXI
bus, and compares every one of the 57,600 output pixels to the golden model.
```bash
make -C sim tpu
```
Expect: `BIT-EXACT` and `TPU done: 252015 cycles (4.38 cycles/px, 2.520 ms @100MHz)`.

### Step 3. Test the whole SoC (CPU + TPU + firmware)
Simulates the complete chip: the real PicoRV32 boots the real firmware, runs
Sobel in software (twice — a fair version and a hand-optimized version), then
drives the TPU, and prints cycle counts. This is where the speedup numbers
come from. Takes about a minute (Verilator).
```bash
make -C fw sim     # rebuild sim firmware if you changed the image in step 1
make -C sim soc
```
Expect: both outputs `BIT-EXACT`, plus the cycle table
(CPU ≈ 71.5 M / 15.4 M cycles, TPU ≈ 252 K compute).

### Step 4. Build the FPGA bitstream
Fully scripted: creates the Vivado project, draws the whole block design,
assigns addresses, synthesizes, routes, writes the bitstream and reports.
Takes ~15–25 minutes. (Needs the firmware built first for the boot ROM.)
```bash
make -C fw
/opt/Vivado/2023.2/bin/vivado -mode batch -source vivado/build_all.tcl
```
Expect at the end: `Setup WNS : 0.550 ns (>= 0 means 100 MHz closed)` and
`vivado/sobel_tpu.bit`. Your reports live in `vivado/reports/`:
- `utilization.rpt` — LUT/FF/BRAM/DSP usage (CV numbers)
- `timing.rpt` — the 100 MHz closure proof
- `power.rpt` — 0.486 W

**Done.** At this point the entire implementation is complete and every
performance/area/timing/power figure is measured. Simulation cycle counts are
what the silicon will report — same RTL, same firmware; the board adds wall-clock
confirmation and the fun of watching LEDs.

---

## Part B — the day the board arrives

Plug the Arty into your laptop with a micro-USB cable. That one cable is
power + bitstream loading (JTAG) + all data transfer (UART). Two serial
devices appear; the UART is the **second** one, usually `/dev/ttyUSB1`.
(One-time: `sudo usermod -aG dialout $USER`, then log out/in.)

### Step 5. Load the bitstream
```bash
/opt/Vivado/2023.2/bin/vivado -mode batch -source vivado/program.tcl
```
The green DONE LED lights. LED0 turns on = the boot ROM is waiting for
firmware. (This lasts until power-off; to make it permanent later, look up
"Quad-SPI flash programming" — optional.)

### Step 6. Run the whole benchmark with one command
```bash
cd host
python3 run_board.py --port /dev/ttyUSB1 --push-fw
```
When it says so, press the red RESET button once. The script then:
1. pushes `firmware.bin` into the board (the boot ROM receives it and jumps),
2. uploads your kernels and image (checksummed),
3. runs CPU-Sobel, optimized-CPU-Sobel, and TPU-Sobel,
4. downloads both result images,
5. checks everything is bit-exact vs the golden model,
6. prints the final table: cycles, ms, speedup, GOPS, PSNR,
7. saves `out/board_cpu.png` and `out/board_tpu.png`.

The cycle numbers should match Step 3. That's the whole demo.

### Step 7 (optional). Play with it by hand
```bash
picocom -b 230400 /dev/ttyUSB1     # or any serial terminal
```
Press **BTN0** = run CPU Sobel, **BTN1** = run TPU Sobel — cycle counts print
to the terminal. LEDs: LED1 app alive, LED2 busy, LED3 last run was TPU.

### Changing things later
- **New image** → Step 1, then `run_board.py` again (no rebuilds).
- **New firmware** (edit `fw/*.c`) → `make -C fw`, press RESET,
  `run_board.py --push-fw`. **Vivado is never re-run for firmware.**
- **New filter kernel** → edit `host/kernels.py`, rerun it, `run_board.py`.
- **RTL change** → Steps 2, 3, 4 again (that's the only time Vivado reruns).

### If something misbehaves
See "Troubleshooting" in `docs/README.md` §8 (wrong tty, no BOOT banner,
checksum ERR, timing, garbled UART — each with its one-line fix).
