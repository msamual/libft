
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = -1;
	if (size < 1 || src == dest)
		return (dest);
	while (++i < size)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
