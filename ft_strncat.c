
#include "libft.h"

char	*ft_strncat(char *dest, const char *append, size_t n)
{
	char *res;

	res = dest;
	while (*dest)
		dest++;
	while (*append && n--)
	{
		*dest = *append;
		dest++;
		append++;
	}
	*dest = '\0';
	return (res);
}
