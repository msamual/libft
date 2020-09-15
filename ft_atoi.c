
int	ft_atoi(char *str)
{
	int neg;
	int res;

	neg = 0;
	res = 0;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str == '-')
		neg++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str > 47 && *str < 58)
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	if (neg)
		return (-res);
	return (res);
}
