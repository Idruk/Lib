#ifndef LIBI_H_
# define LIBI_H_
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

size_t	i_strlen(const char *str);
char	*i_strcpy(char *dest, const char *src);
char	*i_strncpy(char *dest, char *src, int n);
int	i_strcmp(char *s1, char *s2);
int	i_strncmp(char *s1, char *s2, int n);
char	*i_int_to_char(int nb);
char	*i_int_to_char_base(int nb, char *base);

int	i_putchar_fd(const int fd, const char c);
int	i_putstr_fd(const int fd, const char *str);
int	i_putchar(const char c);
int	i_putstr(const char *str);

char	i_islower(const char c);
char	i_isupper(const char c);
char	i_isdigit(const char c);
char	i_isalpha(const char c);
char	i_isalnum(const char c);
char	*strdup(const char *src);
char	*strstr(const char *str, const char *token);

#endif /*!LIBI_H_*/
