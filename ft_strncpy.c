#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *res;

	res = dst;
	while (*src && len)
	{
		*dst = *src;
		dst++;
		src++;
		len--;
	}
	while (len)
	{
		*dst = '\0';
		dst++;
		len--;
	}
	return (res);
}
