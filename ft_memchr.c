
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*res;

	chr = (unsigned char)c;
	res = (unsigned char *)s;
	while (n--)
	{
		if (*res == chr)
			return (res);
		res++;
	}
	return (NULL);
}
