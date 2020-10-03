
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	if (!size)
		return (size);
	i = 0;
	j = ft_strlen(src);
	k = ft_strlen(dst);
	while (dst[i])
		i++;
	while (*src && i < size - 1)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	if (k > size)
		return (size + j);
	return (k + j);
}
