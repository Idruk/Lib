
#include "libi.h"

int	i_putstr(const char *str)
{
  return (i_putstr_fd(1, str));
}
