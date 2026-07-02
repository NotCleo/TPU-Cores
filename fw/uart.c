#include "soc.h"

void uart_putc(char c) {
    while (UART_STAT & UART_ST_TXFULL)
        ;
    UART_TX = (uint32_t)(uint8_t)c;
}

int uart_getc(void) {
    while (!(UART_STAT & UART_ST_RXVALID))
        ;
    return (int)(UART_RX & 0xFF);
}

int uart_getc_nb(void) {
    if (!(UART_STAT & UART_ST_RXVALID))
        return -1;
    return (int)(UART_RX & 0xFF);
}

void uart_puts(const char *s) {
    while (*s)
        uart_putc(*s++);
}
