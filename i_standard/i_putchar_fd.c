
#include "libi.h"

int	i_putchar_fd(const int fd, const char c)
{
  if (fd == -1)
    return (-1);
  return (write(fd, &c, 1));
}
