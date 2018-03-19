
#include "libi.h"

char	i_isalnum(const char c)
{
  return (i_isalpha(c) || i_isdigit(c));
}
