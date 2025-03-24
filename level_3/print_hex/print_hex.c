#include <unistd.h>

int ft_atoi(char *str)
{
	int sign = 1;
	int nb = 0;

	while ((*str >= 9 && *str <= 13 ) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		nb = (nb * 10) + *str++ - 48;
	return (nb * sign);
}
void print_hex(int nb)
{
	char hex[] = "0123456789abcdef";
	if (nb >= 16)
		print_hex(nb / 16);
	write(1, &(char){hex[nb % 16]}, 1);
}

int main (int ac, char *av[])
{
	if (ac == 2)
	{
		int nb = ft_atoi(av[1]);
		if (nb < 0)
		{
			write(1, "\n", 1);
			return(1);
		}
		print_hex(nb);
	}
	write(1, "\n", 1);
	return (0);
}
