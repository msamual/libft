#include "libft.h"

void			*ft_memmove(void *dest, const void *source, size_t size)
{
	unsigned char	*tmp;
	unsigned char	*destination;
	unsigned char	*src;
	size_t			i;

	tmp = malloc(sizeof(unsigned char) * size);
	if (!tmp)
		return (dest);
	destination = (unsigned char *)dest;
	src = (unsigned char *)source;
	i = -1;
	while (++i < size)
		tmp[i] = src[i];
	i = -1;
	while (++i < size)
		destination[i] = tmp[i];
	return (dest);
}
