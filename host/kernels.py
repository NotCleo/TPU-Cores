#!/usr/bin/env python3
"""Generate kernel.bin: the dynamic filter coefficients sent to the board.

Format (what fw/main.c 'K' command and the TPU register file expect):
  8 slots x 9 signed int8 taps, row-major k[3*dr+dc] = 72 bytes total.
  Slot 0 = Sobel Gx, slot 1 = Sobel Gy (used by MAG post-op mode).
  Slots 2..7 are free demo slots (edit EXTRA_KERNELS below).

The kernel is NOT hardcoded in hardware: these 72 bytes end up in the
TPU's KERNEL registers via UART -> firmware -> AXI writes, so you can
filter with anything expressible as a 3x3 int8 kernel.
"""

import sys
import numpy as np

from golden import SOBEL_GX, SOBEL_GY

EXTRA_KERNELS = {
    2: np.array([1, 1, 1, 1, 1, 1, 1, 1, 1], dtype=np.int8),      # box blur (use shift=3)
    3: np.array([0, -1, 0, -1, 5, -1, 0, -1, 0], dtype=np.int8),  # sharpen
    4: np.array([-1, -1, -1, -1, 8, -1, -1, -1, -1], dtype=np.int8),  # laplacian
}


def build_kernel_blob():
    blob = np.zeros((8, 9), dtype=np.int8)
    blob[0] = SOBEL_GX
    blob[1] = SOBEL_GY
    for slot, k in EXTRA_KERNELS.items():
        blob[slot] = k
    return blob.tobytes()  # 72 bytes, two's complement


if __name__ == "__main__":
    out = sys.argv[1] if len(sys.argv) > 1 else "out/kernel.bin"
    blob = build_kernel_blob()
    import os
    os.makedirs(os.path.dirname(out) or ".", exist_ok=True)
    with open(out, "wb") as f:
        f.write(blob)
    print(f"wrote {out}: {len(blob)} bytes (8 slots x 9 int8 taps)")
