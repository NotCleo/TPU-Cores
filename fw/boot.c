// UART bootloader (< 1 KB). Baked into the bitstream so firmware iteration
// never touches Vivado again: on reset it waits for the host to push the
// application binary, then jumps to it.
//
// Wire protocol (see host/run_board.py push_firmware()):
//   host -> "FWLD" magic, 4-byte LE length, payload, 4-byte LE checksum
//           (checksum = 32-bit sum of payload bytes)
//   fpga -> "BOOT\n" banner on reset; "OKGO\n" then jumps to 0x2000 on
//           success; "ERR\n" and re-arms on bad length/checksum.
// Garbage before the magic is skipped byte-by-byte, so a noisy/stale serial
// line can't wedge the loader. Uses only stack locals: no .data/.bss, safe
// across warm resets.
#include "soc.h"

#define MAX_APP (RAM_SIZE - APP_BASE - 0x8000u)   /* leave 32 KB for stack */

static uint32_t get4(void) {
    uint32_t v = (uint32_t)uart_getc();
    v |= (uint32_t)uart_getc() << 8;
    v |= (uint32_t)uart_getc() << 16;
    v |= (uint32_t)uart_getc() << 24;
    return v;
}

void bootmain(void) {
    GPIO_LED_TRI = 0x0;
    GPIO_LED = 0x1;                       /* LED0 = waiting for firmware */
    uart_puts("BOOT\n");

    for (;;) {
        static const char magic[4] = {'F', 'W', 'L', 'D'};
        int m = 0;
        while (m < 4) {
            int c = uart_getc();
            m = (c == magic[m]) ? m + 1 : (c == 'F' ? 1 : 0);
        }

        uint32_t len = get4();
        if (len == 0 || len > MAX_APP) {
            uart_puts("ERR\n");
            continue;
        }
        volatile uint8_t *dst = (volatile uint8_t *)APP_BASE;
        uint32_t sum = 0;
        for (uint32_t i = 0; i < len; i++) {
            uint32_t c = (uint32_t)uart_getc();
            dst[i] = (uint8_t)c;
            sum += c;
        }
        if (get4() != sum) {
            uart_puts("ERR\n");
            continue;
        }
        uart_puts("OKGO\n");
        GPIO_LED = 0x2;
        ((void (*)(void))APP_BASE)();     /* no return */
    }
}
