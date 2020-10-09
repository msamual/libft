
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] && ft_strchr(" \n\t", s[start]))
		start++;
	end = start;
	while (s[end])
		end++;
	while (end && ft_strchr(" \n\t", s[end]))
		end--;
	if (end <= start)
		return ("");
	return (ft_strsub(s, start, end - start + 1));
}
