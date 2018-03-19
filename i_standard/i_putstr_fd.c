
#include "libi.h"

int	i_putstr_fd(const int fd, const char *str)
{
  if (fd == -1)
    return (-1);
  return (write(fd, str, i_strlen(str)));
}
