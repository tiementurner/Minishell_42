int		ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		if (result >= 9223372036854775808UL && (sign == -1))
			return (0);
		if (result >= 9223372036854775807 && (sign == 1))
			return (-1);
		i++;
	}
	return ((int)(result * sign));
}
