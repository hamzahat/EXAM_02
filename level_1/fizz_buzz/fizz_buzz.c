#include <unistd.h>
void ft_putchar(char *str)
{
	while (*str)
		write(1, str++, 1);
}
void ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	char c = (nb % 10) + 48;
	write(1, &c, 1);
}
int main (void)
{
	int i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			ft_putchar("fizzbuzz");
		else if ((i % 3) == 0)
			ft_putchar("fizz");
		else if ((i % 5 ) == 0)
			ft_putchar("buzz");
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	
	return (0);
}
