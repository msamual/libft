
#include <string.h>

void	*ft_memset(void *ptr, int value, size_t size)
{
	unsigned char	*str;
	unsigned char	c;

	c = (unsigned char)value;
	str = (unsigned char *)ptr;
	while (size)
	{
		*str = c;
		str++;
		size--;
	}
	return (ptr);
}
