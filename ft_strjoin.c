
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	l1;
	size_t	l2;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (!(res = ft_strnew(l1 + l2)))
		return (NULL);
	ft_strncpy(res, s1, l1);
	ft_strncpy(&(res[l1]), s2, l2);
	return (res);
}
