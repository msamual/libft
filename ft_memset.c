
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	ch;

	ch = (unsigned char)c;
	str = (unsigned char *)b;
	while (len)
	{
		*str = ch;
		str++;
		len--;
	}
	return (b);
}
