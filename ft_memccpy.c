
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t		i;
	unsigned char	*source;
	unsigned char	*destiation;

	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	if (size < 1 || src == dest)
		return (dest);
	i = -1;
	while (++i < size && source[i] != (unsigned char)c)
		destination[i] = source[i];
	destination[i] = source[i];
	return (dest);
}
