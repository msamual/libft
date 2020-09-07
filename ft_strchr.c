
#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str && *str != ch)
		str++;
	if (*str == ch)
		return ((char *)str);
	return (NULL);
}
