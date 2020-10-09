
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *res;

	if (!s || (!(res = ft_strnew(len))))
		return (NULL);
	return (ft_strncpy(res, &(s[start]), len));
}
