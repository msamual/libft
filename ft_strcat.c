
char	*ft_strcat(char *dest, const char *append)
{
	char *res;

	res = dest;
	while (*dest)
		dest++;
	while (*append)
	{
		*dest = *append;
		dest++;
		append++;
	}
	*dest = '\0';
	return (res);
}
