#include "libi.h"
#include <unistd.h>

void	i_putstr(int fd, char *str)
{
	write(fd, str, i_strlen(str));
}
