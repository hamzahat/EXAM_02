int	ft_atoi(const char *str)
{
	int num = 0;
	int signe = 1;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -signe;
		str++;
	}
	while (*str <= '9' && *str >= '0')
		num = (num * 10) + (*str++ - 48);
	return (num * signe);
}
