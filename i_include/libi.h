#ifndef		LIBI_H_
#define		LIBI_H_

int	i_strlen(char *str);
void	i_putstr(char *str);
void	i_putchar(char c);
char	*i_strcpy(char *dest, char *src);
char	*i_strncpy(char *dest, char *src, int n);
int	i_strcmp(char *s1, char *s2);
int	i_strncmp(char *s1, char *s2, int n);
char	*i_int_to_char(int nb);

#endif		/*!LIBI_H_*/
