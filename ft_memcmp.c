
#include "libft.h"

int	ft_memcmp(void *arr1, void *arr2, size_t size)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t		i;

	s1 = (unsigned char *)arr1;
	s2 = (unsigned char *)arr2;
	i = -1;
	while (++i < size)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
