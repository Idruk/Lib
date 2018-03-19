#include <stdlib.h>
#include "libi.h"

static int	base_nb_len(int nb)
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

static void	base_fill_res(int nb, char *res, char *base, int base_len)
{
	if (nb < 0) {
		res[0] = '-';
		nb = -nb;
		res += 1;
	}
	if (nb >= base_len) {
		base_fill_res(nb / base_len, res + 1, base, base_len);
	} else {
		res[1] = '\0';
	}
	*res = base[nb % base_len];
}

static void	base_swap(char *c1, char *c2)
{
	char tmp = *c1;

	*c1 = *c2;
	*c2 = tmp;
}

static char	*i_base_rev_str(char *str)
{
	int i;
	int j;

	for (i = 0, j = (i_strlen(str) - 1); i < j; i++, j--)
		base_swap(&str[i], &str[j]);
	return (str);
}

char	*i_int_to_char_base(int nb, char *base)
{
	char	*res = NULL;
	int	len = base_nb_len(nb);
	int	base_len = i_strlen(base);

	res = malloc(sizeof(char) * (len + 1));
	base_fill_res(nb, res, base, base_len);
	res = i_base_rev_str(res);
	return (res);
}
