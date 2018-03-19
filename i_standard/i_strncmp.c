int	i_strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; (s1[i] && s2[i]) && s1[i] == s2[i] && i < n; i++);
	return (s1[i] - s2[i]);
}
