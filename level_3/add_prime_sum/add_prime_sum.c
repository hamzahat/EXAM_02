#include <unistd.h>
#include <stdlib.h>

//* helper funs:
int	ft_atoi(char *str)
{
	int num = 0;
	int sign = 1;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		num = (num * 10) + (*str++ - 48);
	return (num * sign);
}

int is_prime(int n)
{
	int i = 2;
	if (n < 2)
		return (0);
	while (i < n)
		if (!(n % i++))
			return (0);
	return (1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	char c = (nb % 10) + 48;
	write(1, &c, 1);
}

int main(int ac, char *av[])
{
	int resulte = 0;
	if ((ac == 2) && (ft_atoi(av[1]) > 0))
	{
		int nb = ft_atoi(av[1]);
		while (nb)
		{
			if (is_prime(nb))
				resulte += nb;
			nb--;
		}
	}
	ft_putnbr(resulte);
	write(1, "\n", 1);
}
