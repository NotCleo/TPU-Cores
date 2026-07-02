#include "soc.h"

void print_dec(uint32_t v) {
    char buf[11];
    int i = 0;
    if (v == 0) {
        uart_putc('0');
        return;
    }
    while (v) {
        buf[i++] = '0' + (v % 10u);
        v /= 10u;
    }
    while (i)
        uart_putc(buf[--i]);
}

void print_hex(uint32_t v) {
    for (int i = 28; i >= 0; i -= 4) {
        uint32_t n = (v >> i) & 0xF;
        uart_putc(n < 10 ? '0' + n : 'a' + n - 10);
    }
}
