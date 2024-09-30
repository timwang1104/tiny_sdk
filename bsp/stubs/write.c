#include <stdint.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>

#include "platform.h"
#include "stub.h"

ssize_t write(int fd, const void *buf, size_t count) {

  const uint8_t * current = (const char *)ptr;

  if (isatty(fd)) {
    for (size_t jj = 0; jj < len; jj++) {
      outw(UART_CTRL_BASE + UART_TX_FIFO, current[jj]);

      if (current[jj] == '\n') {
        outw(UART_CTRL_BASE + UART_TX_FIFO, '\r');
      }
    }
    return len;
  }
  return _stub(EBADF);
}
