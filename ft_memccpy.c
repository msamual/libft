
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	unsigned char		*source;
	unsigned char		*destination;

	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	while (size--)
	{
		*destination = *source;
		if (*source == (unsigned char)c)
			return (destination + 1);
		destination++;
		source++;
	}
	return (NULL);
}
