#!/usr/bin/env python3
"""Compare a simulation output dump against the golden reference.

usage: compare.py <rtl_out.bin> <golden_int.bin> [golden_float.png]
Exit code 0 only if the RTL/CPU output is bit-exact vs the integer golden model.
"""
import sys

import numpy as np

sys.path.insert(0, "../host")
import golden  # noqa: E402


def main():
    out_bin, gold_bin = sys.argv[1], sys.argv[2]
    a = np.fromfile(out_bin, dtype=np.uint8)
    g = np.fromfile(gold_bin, dtype=np.uint8)
    n = golden.W_OUT * golden.H_OUT
    a, g = a[:n], g[:n]
    if a.size != n:
        print(f"FAIL: {out_bin} has {a.size} bytes, expected {n}")
        sys.exit(1)
    diff = np.count_nonzero(a != g)
    if diff == 0:
        print(f"PASS: {out_bin} is BIT-EXACT vs {gold_bin} ({n} pixels)")
    else:
        idx = np.argwhere(a != g).ravel()[:10]
        print(f"FAIL: {diff}/{n} pixels differ; first at {[(i // 240, i % 240) for i in idx]}")
        for i in idx[:5]:
            print(f"  px({i // 240},{i % 240}): rtl={a[i]} golden={g[i]}")
        sys.exit(1)

    if len(sys.argv) > 3:
        from PIL import Image
        ref = np.asarray(Image.open(sys.argv[3]), dtype=np.float64)
        p = golden.psnr(a.reshape(golden.H_OUT, golden.W_OUT), ref)
        print(f"PSNR vs float sqrt-magnitude reference: {p:.2f} dB")


if __name__ == "__main__":
    main()
