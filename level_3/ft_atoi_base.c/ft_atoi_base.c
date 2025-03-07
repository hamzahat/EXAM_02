long long	ft_atoi_base(const char *str, int base)
{
	long long rest = 0;
	short sign = 1;
	int digit;

	if (base < 2 || base > 16)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			digit = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			digit = *str - 'A' + 10;
		else
			break;
		rest = (rest * base) + digit;
		str++;
	}
	return (rest * sign);
}

#include <stdio.h>

int main(void)
{
	printf("Base 2 :  \"101\"   -> %lld\n", ft_atoi_base("101", 1));      // 0
	printf("Base 2 :  \"101\"   -> %lld\n", ft_atoi_base("101", 32));      // 0
	printf("Base 2 :  \"101\"   -> %lld\n", ft_atoi_base("101", 2));      // 5
	printf("Base 16:  \"2A\"    -> %lld\n", ft_atoi_base("2A", 16));      // 42
	printf("Base 16:  \"-1A\"   -> %lld\n", ft_atoi_base("-1A", 16));     // -26
	printf("Base 4 :  \"123\"   -> %lld\n", ft_atoi_base("123", 4));      // 27
	printf("Base 10:  \"-42\"   -> %lld\n", ft_atoi_base("-42", 10));     // -42
	printf("Base 16:  \"g12\"   -> %lld\n", ft_atoi_base("g12", 16));     // 0 (invalid)
	printf("Base 5 :  \"243\"   -> %lld\n", ft_atoi_base("243", 5));      // 73
	printf("Base 8 :  \"77\"    -> %lld\n", ft_atoi_base("77", 8));       // 63
	printf("Base 10:  \"-00042\"-> %lld\n", ft_atoi_base("-00042", 10));  // -42
	return 0;
}
