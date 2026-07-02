// CPU baseline -- both functions must match host/golden.py (mode 1, MAG)
// bit-exactly; the host verifies CPU output == TPU output == golden model.
#include "soc.h"

// Generic dynamic-kernel version: computes exactly what the TPU computes
// (two 3x3 int8 kernels, |a0|+|a1| >> shift, saturate). This is the
// apples-to-apples baseline for the speedup number.
void sobel_cpu_generic(const uint8_t *img, uint8_t *out,
                       const int8_t *k0, const int8_t *k1, int shift) {
    for (int y = 0; y < IMG_H_OUT; y++) {
        const uint8_t *row = img + y * IMG_W_PAD;
        uint8_t *o = out + y * IMG_W_OUT;
        for (int x = 0; x < IMG_W_OUT; x++) {
            const uint8_t *p = row + x;
            int a0 = 0, a1 = 0;
            for (int dr = 0; dr < 3; dr++) {
                const uint8_t *q = p + dr * IMG_W_PAD;
                const int8_t *c0 = k0 + 3 * dr, *c1 = k1 + 3 * dr;
                for (int dc = 0; dc < 3; dc++) {
                    int px = q[dc];
                    a0 += c0[dc] * px;
                    a1 += c1[dc] * px;
                }
            }
            if (a0 < 0) a0 = -a0;
            if (a1 < 0) a1 = -a1;
            unsigned v = ((unsigned)a0 + (unsigned)a1) >> shift;
            o[x] = v > 255u ? 255u : (uint8_t)v;
        }
    }
}

// Hand-optimized hardcoded-Sobel version: sliding 3x3 window keeps 6 pixels
// live across iterations (3 loads/pixel instead of 9, shifts instead of
// multiplies). This is the strongest software Sobel we can reasonably write
// for this core -- quoted as the "optimized CPU" baseline.
void sobel_cpu_fast(const uint8_t *img, uint8_t *out) {
    for (int y = 0; y < IMG_H_OUT; y++) {
        const uint8_t *r0 = img + y * IMG_W_PAD;
        const uint8_t *r1 = r0 + IMG_W_PAD;
        const uint8_t *r2 = r1 + IMG_W_PAD;
        uint8_t *o = out + y * IMG_W_OUT;
        int p00 = r0[0], p01 = r0[1];
        int p10 = r1[0], p11 = r1[1];
        int p20 = r2[0], p21 = r2[1];
        for (int x = 0; x < IMG_W_OUT; x++) {
            int p02 = r0[x + 2], p12 = r1[x + 2], p22 = r2[x + 2];
            int gx = (p02 + (p12 << 1) + p22) - (p00 + (p10 << 1) + p20);
            int gy = (p20 + (p21 << 1) + p22) - (p00 + (p01 << 1) + p02);
            if (gx < 0) gx = -gx;
            if (gy < 0) gy = -gy;
            int v = gx + gy;
            o[x] = v > 255 ? 255 : (uint8_t)v;
            p00 = p01; p01 = p02;
            p10 = p11; p11 = p12;
            p20 = p21; p21 = p22;
        }
    }
}
