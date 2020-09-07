
#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (dst[i])
		i++;
	while (*src && i < size - 1)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
