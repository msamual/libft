
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char	*result;

	i = -1;
	if (!s)
		return (NULL);
	result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
		return (result);
	while (s[++i])
		result[i] = f(s[i]);
	result[i] = '\0';
	return (result);
}

