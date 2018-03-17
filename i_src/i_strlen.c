
#include "libi.h"

size_t		i_strlen(const char *str)
{
  const char	*istr = str;
  size_t	buffer;

  do
    {
      buffer = *((size_t*)(istr));
      if (!(buffer & 0xFF))
	return (istr - str);
      if (!(buffer & 0xFF00))
	return (istr - str + 1);
      if (!(buffer & 0xFF0000))
	return (istr - str + 2);
      if (!(buffer & 0xFF000000))
	return (istr - str + 3);
      istr += 4;
    } while (1);
}
