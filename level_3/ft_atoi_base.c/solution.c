//*======================== char gpt fun========================
long long ft_atoi_base(const char *str, int base)
{
    long long result = 0;
    int sign = 1;
    int digit;
    
	if (base < 2 || base > 16)
		return (0);

    if (*str == '-')
    {
        sign = -1;
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

        result = result * base + digit;
        str++;
    }
	
    return result * sign;
}
//*======================== friend fun ========================

int    ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int res = 0;
    int c;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            c = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            c = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            c = str[i] - 'A' + 10;
        else
            break;
        res = res * str_base + c;
        i++;
    }
    return (res * sign);
}
//*======================== grademe fun ========================

#include <stdio.h>
#include <stdlib.h>

int is_blank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int		isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int		value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

long long		ft_atoi_base(const char *str, int str_base)
{
	long long result;
	int sign;

	result = 0;
	while (is_blank(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? ++str : 0;
	while (isvalid(*str, str_base))
		result = result * str_base + value_of(*str++);
	return (result * sign);
}

//*======================== main fun ========================

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