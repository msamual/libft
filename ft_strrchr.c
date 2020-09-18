
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char ch;
	char *res;

	ch = (char)c;
	res = NULL;
	while (*s)
	{
		if (*s == ch)
			res = (char *)s;
		s++;
	}
		if (*s == ch)
			res = (char *)s;
	return (res);
}
