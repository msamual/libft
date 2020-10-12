
#include "libft.h"

int	is_word(char const *s, unsigned int pos, char c)
{
	if (pos == 0)
		if (s[pos] != c)
			return (1);
	if (s[pos] != c && s[pos - 1] == c)
		return (1);
	return (0);
}
int	words_count(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (is_word(s, i, c))
			count++;
		i++;
	}
	return (count);
}

int	word_size(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	unsigned int	count;
	unsigned int	i;
	unsigned int	j;
	char		**res;

	if (!s)
		return (NULL);
	count = words_count(s, c);
	if (!(res = malloc(sizeof(char *) * count)))
		return (NULL);
	i = 0;
	j = 0;
	while (j < count)
	{
		if (is_word(s, i, c))
		{
			if (!(res[j] = ft_strsub(s, i, word_size(&(s[i]), c))))
				return (NULL);
			j++;
		}
		i++;
	}
	return (res);
}
