#ifndef LIBI_H_
# define LIBI_H_
# include <stddef.h>
# include <stdlib.h>

size_t	i_strlen(const char *str);
void	i_putstr(char *str);
void	i_putchar(char c);
char	*i_strcpy(char *dest, const char *src);
char	*i_strncpy(char *dest, char *src, int n);
int	i_strcmp(char *s1, char *s2);
int	i_strncmp(char *s1, char *s2, int n);
char	*i_int_to_char(int nb);
char	*i_int_to_char_base(int nb, char *base);

char	i_islower(const char c);
char	i_isupper(const char c);
char	i_isdigit(const char c);
char	i_isalpha(const char c);
char	i_isalnum(const char c);

#endif /*!LIBI_H_*/
