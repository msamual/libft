
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = i;
		k = 0;
		while (haystack[j] && haystack[j] == needle[k])
		{
			j++;
			k++;
		}
		if (!needle[k])
			return ((char *)(&(haystack[i])));
		i++;
	}
	return (NULL);
}
