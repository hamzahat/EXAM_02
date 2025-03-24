//! easy + nice logic

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

void ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1 , &(char){nb % 10 + 48}, 1);
}

int main (int ac, char *av[])
{
	if (ac == 2)
	{
		int multiple = 1;
		int nb = ft_atoi(av[1]);
		while (multiple <= 9)
		{
			ft_putnbr(multiple);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			ft_putnbr(multiple++ * nb);
			write(1, "\n", 1);
		}
		return (0);
	}
	write(1 ,"\n", 1);
	return (0);
}
