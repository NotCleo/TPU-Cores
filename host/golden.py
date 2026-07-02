"""Bit-exact golden model of the sobel_tpu datapath.

This file is the specification. The RTL (rtl/sobel_tpu.v) and the CPU
baseline firmware (fw/sobel_sw.c) must both match conv2d_int() +
postproc() bit-for-bit. All hardware/firmware verification compares
against these functions.

Datapath contract:
  - input image : H_PAD x W_PAD uint8 (default 242x242, edge-replicate
    padded from 240x240)
  - kernels     : up to 8 slots x 9 signed int8 taps, row-major
    k[3*dr+dc], dr/dc in 0..2
  - accumulator : signed integer, worst case |acc| <= 9*127*255 = 291465
    -> fits 20-bit signed (hardware uses 20-bit accumulators)
  - post-op modes (POST register [1:0]):
      0 SINGLE_ABS : out = sat255( |acc[colsel]| >> shift )
      1 MAG        : out = sat255( (|acc[0]| + |acc[1]|) >> shift )
      2 SIGNED_BIAS: out = clamp0_255( (acc[colsel] >>a shift) + 128 )
    shift = POST[7:4] (logical on the non-negative values of modes 0/1,
    arithmetic in mode 2), colsel = POST[10:8].
"""

import numpy as np

W_OUT, H_OUT = 240, 240
W_PAD, H_PAD = 242, 242

SOBEL_GX = np.array([-1, 0, 1, -2, 0, 2, -1, 0, 1], dtype=np.int8)
SOBEL_GY = np.array([-1, -2, -1, 0, 0, 0, 1, 2, 1], dtype=np.int8)

MODE_SINGLE_ABS = 0
MODE_MAG = 1
MODE_SIGNED_BIAS = 2


def conv2d_int(img_pad, kernel):
    """Exact integer 'valid' 3x3 convolution (really cross-correlation,
    matching the hardware: acc = sum k[3*dr+dc] * img[y+dr][x+dc])."""
    img = img_pad.astype(np.int64)
    k = kernel.astype(np.int64)
    h, w = img.shape
    acc = np.zeros((h - 2, w - 2), dtype=np.int64)
    for dr in range(3):
        for dc in range(3):
            acc += k[3 * dr + dc] * img[dr:dr + h - 2, dc:dc + w - 2]
    return acc


def postproc(accs, mode=MODE_MAG, shift=0, colsel=0):
    """accs: list/array of per-slot accumulator planes (index = filter slot)."""
    if mode == MODE_SINGLE_ABS:
        v = np.abs(accs[colsel]) >> shift
    elif mode == MODE_MAG:
        v = (np.abs(accs[0]) + np.abs(accs[1])) >> shift
    elif mode == MODE_SIGNED_BIAS:
        v = (accs[colsel] >> shift) + 128  # numpy >> on signed is arithmetic
        v = np.maximum(v, 0)
    else:
        raise ValueError(f"bad mode {mode}")
    return np.minimum(v, 255).astype(np.uint8)


def sobel_golden_int(img_pad, shift=0):
    """The exact image the TPU and the CPU baseline must both produce."""
    gx = conv2d_int(img_pad, SOBEL_GX)
    gy = conv2d_int(img_pad, SOBEL_GY)
    return postproc([gx, gy], mode=MODE_MAG, shift=shift)


def sobel_reference_float(img_pad):
    """Floating-point sqrt-magnitude Sobel, clipped to [0,255].

    NOT what the hardware computes -- this is the 'textbook' reference
    used only for the PSNR quality metric (quantifies the |Gx|+|Gy|
    approximation of sqrt(Gx^2+Gy^2))."""
    gx = conv2d_int(img_pad, SOBEL_GX).astype(np.float64)
    gy = conv2d_int(img_pad, SOBEL_GY).astype(np.float64)
    return np.clip(np.sqrt(gx * gx + gy * gy), 0, 255)


def psnr(a, b, peak=255.0):
    a = np.asarray(a, dtype=np.float64)
    b = np.asarray(b, dtype=np.float64)
    mse = np.mean((a - b) ** 2)
    if mse == 0:
        return float("inf")
    return 10.0 * np.log10(peak * peak / mse)


def pad_replicate(img):
    """240x240 -> 242x242 edge-replicate pad (1 px each side)."""
    return np.pad(img, 1, mode="edge")


def make_test_pattern(seed=1):
    """Synthetic 240x240 test image (no JPEG needed): gradient background,
    rectangle, disk, diagonal stripes and a little noise -- gives edges in
    every direction plus texture, good for exercising the datapath."""
    rng = np.random.default_rng(seed)
    y, x = np.mgrid[0:H_OUT, 0:W_OUT]
    img = (x * 255 // (W_OUT - 1)).astype(np.int32)
    img[40:120, 30:110] = 220                              # rectangle
    disk = (y - 160) ** 2 + (x - 170) ** 2 <= 45 ** 2      # disk
    img[disk] = 30
    stripes = ((x + y) // 12) % 2 == 0
    img[170:230, 20:100] = np.where(stripes, 200, 60)[170:230, 20:100]
    img = img + rng.integers(-8, 9, size=img.shape)
    return np.clip(img, 0, 255).astype(np.uint8)
