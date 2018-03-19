#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

static int	nb_len(int nb)
{
	int i = 1;

	if (nb < 0) {
		i++;
		nb = -nb;
	}
	while (nb > 9) {
		nb /= 10;
		i++;
	}
	return (i);
}

static void	fill_res(int nb, char *res, int *i)
{
	if (nb < 0) {
		res[*i] = '-';
		nb = -nb;
		*i += 1;
	}
	if (nb > 9) {
		fill_res(nb / 10, res, i);
		fill_res(nb % 10, res, i);
	} else {
		res[*i] = (nb + 48);
		*i += 1;
	}
}

char	*i_int_to_char(int nb)
{
	char	*res = NULL;
	int	len = nb_len(nb);
	int	i = 0;

	res = malloc(sizeof(char) * (len + 1));
	fill_res(nb, res, &i);
	res[len] = '\0';
	return (res);
}
