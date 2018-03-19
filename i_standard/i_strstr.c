
/*
 * WARNING
 *
 * i_strstr v0.1 - need an update
 *
 */

#include "libi.h"

char		*i_strstr(const char *str, const char *token)
{
  size_t	i = 0;
  size_t	j;

  if (!*token)
    return ((char*)str);
  while (str[i])
    {
      j = 0;
      while (token[j] == str[i + j])
	if (!token[++j])
	  return ((char*)&str[i]);
      i += j + 1;
    }
  return (0);
}
