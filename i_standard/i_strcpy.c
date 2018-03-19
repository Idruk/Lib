
char		*i_strcpy(char *dest, const char *src)
{
  const char	*sdest = dest;

  while (*src)
    {
      *dest = *src;
      ++dest;
      ++src;
    }
  *dest = '\0';
  return ((char*)sdest);
}
