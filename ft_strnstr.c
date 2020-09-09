
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t loc)
{
	int i;
	int k;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[i])
	{
		k = 0;
		while (haystack[i + k] == needle[k] && (i + k) < (int)loc)
			k++;
		if (!needle[k])
			return ((char *)(&(haystack[i])));
		i++;
	}
	return (NULL);
}
