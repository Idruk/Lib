
#include "libi.h"

char	*i_strdup(const char *src)
{
  return (i_strcpy((char*)malloc(i_strlen(src) + 1), src));
}
