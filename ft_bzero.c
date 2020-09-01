
#include <string.h>

void	*ft_bzero(void *ptr, size_t size)
{
	unsigned char *str;

	str = (unsigned char *)ptr;
	while (size)
	{
		*str = 0;
		str++;
		size--;
	}
	return (ptr);
}
