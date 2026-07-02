// SoC memory map + MMIO helpers. Single source of truth for firmware;
// must match the Vivado block-design Address Editor (vivado/build_all.tcl).
#ifndef SOC_H
#define SOC_H

#include <stdint.h>

#define RAM_BASE      0x00000000u
#define RAM_SIZE      0x00040000u          /* 256 KB BRAM               */
#define APP_BASE      0x00002000u          /* bootloader loads app here */

#define GPIO_BASE     0x40000000u          /* axi_gpio: ch1 btn, ch2 led */
#define UART_BASE     0x40600000u          /* axi_uartlite               */
#define TPU_BASE      0x44000000u          /* sobel_tpu, 256 KB window   */
#define SIM_CTRL_BASE 0x40700000u          /* tb_soc.v only, not on FPGA */

#define MMIO(a)   (*(volatile uint32_t *)(a))

/* ---- AXI UART Lite (PG142) ---- */
#define UART_RX       MMIO(UART_BASE + 0x0)
#define UART_TX       MMIO(UART_BASE + 0x4)
#define UART_STAT     MMIO(UART_BASE + 0x8)
#define UART_CTRL     MMIO(UART_BASE + 0xC)
#define UART_ST_RXVALID  (1u << 0)
#define UART_ST_TXFULL   (1u << 3)

/* ---- AXI GPIO (PG144): ch1 = 4 buttons in, ch2 = 4 LEDs out ---- */
#define GPIO_BTN      MMIO(GPIO_BASE + 0x0)
#define GPIO_BTN_TRI  MMIO(GPIO_BASE + 0x4)
#define GPIO_LED      MMIO(GPIO_BASE + 0x8)
#define GPIO_LED_TRI  MMIO(GPIO_BASE + 0xC)

/* ---- sobel_tpu register map (see rtl/sobel_tpu.v) ---- */
#define TPU_CTRL      MMIO(TPU_BASE + 0x00)
#define TPU_STATUS    MMIO(TPU_BASE + 0x04)
#define TPU_IMG_W     MMIO(TPU_BASE + 0x08)
#define TPU_IMG_H     MMIO(TPU_BASE + 0x0C)
#define TPU_POST      MMIO(TPU_BASE + 0x10)
#define TPU_CYCLES    MMIO(TPU_BASE + 0x14)
#define TPU_MAGIC     MMIO(TPU_BASE + 0x18)
#define TPU_KER(slot, tap)  MMIO(TPU_BASE + 0x200 + (slot)*0x40 + (tap)*4)
#define TPU_IBUF      ((volatile uint32_t *)(TPU_BASE + 0x10000))
#define TPU_OBUF      ((volatile uint32_t *)(TPU_BASE + 0x20000))

#define TPU_ST_BUSY   (1u << 0)
#define TPU_ST_DONE   (1u << 1)
#define TPU_MAGIC_VAL 0x53545055u          /* "STPU" */
#define TPU_POST_VAL(mode, shift, colsel) \
    (((uint32_t)(mode) & 3u) | (((uint32_t)(shift) & 0xFu) << 4) | \
     (((uint32_t)(colsel) & 7u) << 8))

/* ---- image geometry (matches host/golden.py) ---- */
#define IMG_W_PAD 242
#define IMG_H_PAD 242
#define IMG_W_OUT 240
#define IMG_H_OUT 240
#define IMG_PAD_BYTES (IMG_W_PAD * IMG_H_PAD)   /* 58564 */
#define IMG_OUT_BYTES (IMG_W_OUT * IMG_H_OUT)   /* 57600 */

/* ---- cycle counter (PicoRV32 ENABLE_COUNTERS) ---- */
static inline uint32_t rdcycle(void) {
    uint32_t x;
    __asm__ volatile ("rdcycle %0" : "=r"(x));
    return x;
}
static inline uint64_t rdcycle64(void) {
    uint32_t lo, hi, hi2;
    do {
        __asm__ volatile ("rdcycleh %0" : "=r"(hi));
        __asm__ volatile ("rdcycle  %0" : "=r"(lo));
        __asm__ volatile ("rdcycleh %0" : "=r"(hi2));
    } while (hi != hi2);
    return ((uint64_t)hi << 32) | lo;
}

/* ---- uart.c ---- */
void uart_putc(char c);
int  uart_getc(void);              /* blocking */
int  uart_getc_nb(void);           /* -1 if no byte pending */
void uart_puts(const char *s);

/* ---- print.c ---- */
void print_dec(uint32_t v);
void print_hex(uint32_t v);

/* ---- sobel_sw.c ---- */
void sobel_cpu_generic(const uint8_t *img, uint8_t *out,
                       const int8_t *k0, const int8_t *k1, int shift);
void sobel_cpu_fast(const uint8_t *img, uint8_t *out);

#endif
