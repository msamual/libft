
#include <unistd.h>

void	ft_putstr(char const *str)
{
	if(str)
		while(*str)
			write(1, str++, 1);
}
