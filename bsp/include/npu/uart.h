#ifndef TINY_UART_H__
#define TINY_UART_H__

#define UART_CTRL_BASE  0x20000
#define UART_TX_FIFO    0x00
#define UART_RX_FIFO    0x04
#define UART_CTRL       0x08

int putchar(int ch);
int puts(const char* str);
void puthex(uint32_t h);

#endif  // TINY_UART_H__
