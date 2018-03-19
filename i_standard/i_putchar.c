
#include "libi.h"

int	i_putchar(const char c)
{
  return (i_putchar_fd(1, c));
}
