#include <unistd.h>

void	put_nbr(int nb)
{
	long	num = nb;
	if (num > 9)
		put_nbr(num / 10);
	write(1, &(char){num % 10 + 48}, 1);
}

int main (int ac, char *av[])
{
	(void)av;
	if (ac == 1)
	{
		put_nbr(0);
		write(1, "\n", 1);
		return(0);
	}
		put_nbr(ac - 1);
	write(1, "\n", 1);
	return(0);
}
