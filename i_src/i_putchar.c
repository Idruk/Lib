#include <unistd.h>

void	i_putchar(char c)
{
	write(1, &c, 1);
}
