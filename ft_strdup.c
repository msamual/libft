
#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*res;
	int		i;

	i = -1;
	if (!(res = malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	while (str[++i])
		res[i] = str[i];
	res[i] = '\0';
	return (res);
}
