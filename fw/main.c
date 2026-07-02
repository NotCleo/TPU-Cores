// Application firmware: host-driven benchmark of CPU-Sobel vs TPU-Sobel.
//
// UART command protocol (host/run_board.py is the other end; all multi-byte
// integers little-endian; every command answers 'D' <payload>):
//   'V'                     -> "SOBEL-TPU v1\n"
//   'I' len32 payload       -> store padded image (58564 B) in CPU RAM,
//                              reply 'D' sum32(payload)
//   'K' len32 payload(72B)  -> store 8x9 int8 kernels + program TPU regs,
//                              reply 'D' sum32
//   'C'                     -> run sobel_cpu_generic, reply 'D' cycles32
//   'F'                     -> run sobel_cpu_fast,    reply 'D' cycles32
//   'T'                     -> copy image -> TPU ibuf, run TPU, reply
//                              'D' copy_cycles32 run_cycles32 tpu_hw_cycles32
//   'R' src8 (0=CPU,1=TPU)  -> reply 'D' len32 + 57600 result bytes
//
// Buttons (polled between commands): BTN0 = CPU run, BTN1 = TPU run, with
// human-readable cycle counts printed to the serial terminal.
// LEDs: LED1 = app alive, LED2 = busy, LED3 = last run was TPU.

#include "soc.h"

static uint8_t img[IMG_PAD_BYTES] __attribute__((aligned(4)));
static uint8_t out_cpu[IMG_OUT_BYTES] __attribute__((aligned(4)));
static int8_t kern[8][9];
static int have_img, have_kern;

#ifdef SIM
#include "image_c.h"                       /* IMAGE_PAD[], generated */
#define SIM_PTR   MMIO(SIM_CTRL_BASE + 0x0)
#define SIM_DONE  MMIO(SIM_CTRL_BASE + 0x4)
#endif

static void put4(uint32_t v) {
    uart_putc((char)(v & 0xFF));
    uart_putc((char)((v >> 8) & 0xFF));
    uart_putc((char)((v >> 16) & 0xFF));
    uart_putc((char)((v >> 24) & 0xFF));
}

static uint32_t get4(void) {
    uint32_t v = (uint32_t)uart_getc();
    v |= (uint32_t)uart_getc() << 8;
    v |= (uint32_t)uart_getc() << 16;
    v |= (uint32_t)uart_getc() << 24;
    return v;
}

static void default_kernels(void) {
    static const int8_t gx[9] = {-1, 0, 1, -2, 0, 2, -1, 0, 1};
    static const int8_t gy[9] = {-1, -2, -1, 0, 0, 0, 1, 2, 1};
    for (int t = 0; t < 9; t++) {
        kern[0][t] = gx[t];
        kern[1][t] = gy[t];
    }
    have_kern = 1;
}

static void tpu_load_kernels(void) {
    for (int s = 0; s < 8; s++)
        for (int t = 0; t < 9; t++)
            TPU_KER(s, t) = (uint32_t)(int32_t)kern[s][t];
}

static uint32_t run_cpu(int fast) {
    GPIO_LED = 0x6;
    uint32_t t0 = rdcycle();
    if (fast)
        sobel_cpu_fast(img, out_cpu);
    else
        sobel_cpu_generic(img, out_cpu, kern[0], kern[1], 0);
    uint32_t dt = rdcycle() - t0;
    GPIO_LED = 0x2;
    return dt;
}

// Copy padded image into the TPU's input BRAM (word writes over AXI).
static uint32_t tpu_copy_image(void) {
    const uint32_t *src = (const uint32_t *)img;
    uint32_t nw = (IMG_PAD_BYTES + 3) / 4;
    uint32_t t0 = rdcycle();
    for (uint32_t i = 0; i < nw; i++)
        TPU_IBUF[i] = src[i];
    return rdcycle() - t0;
}

static uint32_t tpu_run(uint32_t *hw_cycles) {
    TPU_IMG_W = IMG_W_PAD;
    TPU_IMG_H = IMG_H_PAD;
    TPU_POST = TPU_POST_VAL(1, 0, 0);      /* |Gx|+|Gy|, shift 0 */
    tpu_load_kernels();
    uint32_t t0 = rdcycle();
    TPU_CTRL = 1;
    while (!(TPU_STATUS & TPU_ST_DONE))
        ;
    uint32_t dt = rdcycle() - t0;
    *hw_cycles = TPU_CYCLES;
    return dt;
}

static void report(const char *name, uint32_t cyc) {
    uart_puts(name);
    uart_puts(": ");
    print_dec(cyc);
    uart_puts(" cycles\n");
}

#ifndef SIM
static void send_result(int src) {
    uart_putc('D');
    put4(IMG_OUT_BYTES);
    if (src == 0) {
        for (uint32_t i = 0; i < IMG_OUT_BYTES; i++)
            uart_putc((char)out_cpu[i]);
    } else {
        for (uint32_t i = 0; i < IMG_OUT_BYTES / 4; i++)
            put4(TPU_OBUF[i]);
    }
}

static void handle_upload(uint8_t *dst, uint32_t maxlen, int *flag) {
    uint32_t len = get4();
    uint32_t sum = 0;
    for (uint32_t i = 0; i < len; i++) {
        uint32_t c = (uint32_t)uart_getc();
        if (i < maxlen)
            dst[i] = (uint8_t)c;
        sum += c;
    }
    if (len <= maxlen)
        *flag = 1;
    uart_putc('D');
    put4(sum);
}

static void main_loop(void) {
    uint32_t hw;
    for (;;) {
        int c = uart_getc_nb();
        if (c >= 0) {
            switch (c) {
            case 'V':
                uart_putc('D');
                uart_puts("SOBEL-TPU v1\n");
                break;
            case 'I':
                handle_upload(img, IMG_PAD_BYTES, &have_img);
                break;
            case 'K':
                handle_upload((uint8_t *)kern, sizeof(kern), &have_kern);
                break;
            case 'C':
                uart_putc('D');
                put4(run_cpu(0));
                break;
            case 'F':
                uart_putc('D');
                put4(run_cpu(1));
                break;
            case 'T': {
                GPIO_LED = 0xE;
                uint32_t cp = tpu_copy_image();
                uint32_t rn = tpu_run(&hw);
                GPIO_LED = 0xA;
                uart_putc('D');
                put4(cp);
                put4(rn);
                put4(hw);
                break;
            }
            case 'R':
                send_result(uart_getc());
                break;
            default:
                break;                     /* ignore noise */
            }
        }
        /* push buttons: BTN0 = generic CPU run, BTN1 = TPU run */
        uint32_t btn = GPIO_BTN & 0xF;
        if ((btn & 1) && have_img && have_kern) {
            report("\nCPU  sobel (btn0)", run_cpu(0));
            while (GPIO_BTN & 1)
                ;
        }
        if ((btn & 2) && have_img && have_kern) {
            uint32_t cp = tpu_copy_image();
            uint32_t rn = tpu_run(&hw);
            GPIO_LED = 0xA;
            uart_puts("\nTPU  sobel (btn1)\n");
            report("  copy-in ", cp);
            report("  run     ", rn);
            report("  hw-count", hw);
            while (GPIO_BTN & 2)
                ;
        }
    }
}
#endif

int main(void) {
    GPIO_BTN_TRI = 0xF;
    GPIO_LED_TRI = 0x0;
    GPIO_LED = 0x2;

    uart_puts("\nSOBEL-TPU app v1\n");
    if (TPU_MAGIC != TPU_MAGIC_VAL) {
        uart_puts("TPU MAGIC mismatch: ");
        print_hex(TPU_MAGIC);
        uart_putc('\n');
        for (;;)
            GPIO_LED = 0x9;                /* error pattern */
    }
    uart_puts("TPU MAGIC ok\n");
    default_kernels();

#ifdef SIM
    for (uint32_t i = 0; i < IMG_PAD_BYTES; i++)
        img[i] = IMAGE_PAD[i];
    have_img = 1;

    uint32_t hw;
    uint32_t c_gen = run_cpu(0);
    report("CPU generic", c_gen);
    uint32_t c_fast = run_cpu(1);
    report("CPU fast   ", c_fast);
    SIM_PTR = (uint32_t)out_cpu;           /* tb dumps this buffer */

    uint32_t cp = tpu_copy_image();
    uint32_t rn = tpu_run(&hw);
    report("TPU copy-in", cp);
    report("TPU run    ", rn);
    report("TPU hwcount", hw);
    uart_puts("speedup gen/tpu-run = ");
    print_dec(c_gen / rn);
    uart_puts("x\n");
    SIM_DONE = 1;                          /* tb dumps TPU obuf + finishes */
#else
    main_loop();
#endif
    return 0;
}
