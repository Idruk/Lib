#include "libi.h"
#include <unistd.h>

void	i_putstr(char *str)
{
	write(1, str, i_strlen(str));
}
