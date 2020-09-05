
#include "libft.h"

void	*ft_memchr(void *ptr, int ch, size_t count)
{
	unsigned char	chr;
	unsigned char	*res;

	chr = (unsigned char)ch;
	res = (unsigned char *)ptr;
	while (count--)
	{
		if (*res == ch)
			return (res);
		res++;
	}
	return (NULL);
}
