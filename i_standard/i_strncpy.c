char	*i_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
