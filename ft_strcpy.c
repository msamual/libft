
char	*ft_strcpy(char *dest, const char *src)
{
	char *res;

	res = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (res);
}
