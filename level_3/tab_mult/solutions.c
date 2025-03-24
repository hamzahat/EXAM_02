//* solution 1 ===========================================

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putposnbr(int n)
{
    if (n > 9)
        ft_putposnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

int		ft_atoi_pos(char *s)
{
    int		i = 0;
    while (*s >= '0' && *s <= '9')
        i = i * 10 + *s++ - '0';
    return (i);
}

void	tab_mult(int n)
{
    int		i = 1;
    while (i < 10)
    {
        ft_putposnbr(i);
        write(1, " x ", 3);
        ft_putposnbr(n);
        write(1, " = ", 3);
        ft_putposnbr(i++ * n);
        write(1, "\n", 1);
    }
}

int		main(int ac, char **av)
{
    if (ac == 2)
        tab_mult(ft_atoi_pos(av[1]));
    else
        write(1, "\n", 1);
}

//* solution 2 ===========================================

#include <unistd.h>

void	ft_print_num(int n)
{
	if (n >= 10)
		ft_print_num(n /10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}

int		ft_isspace(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

int		ft_atoi(char *s)
{
	int index = 0;
	int result = 0;

	while (s[index] && ft_isspace(s[index]))
		index++;
	if (s[index] == '-' || s[index] == '+')
	{
		if (s[index] == '-')
			return (-1);
		index++;
	}
	while (s[index] && (s[index] >= '0' && s[index] <= '9'))
		result = s[index++] - '0' + (result * 10);
	return (result);
}

int main (int argc, char **argv)
{
	int index = 1;
	int multiple = 1;
	int input;
	int result;

	if (argc > 1)
	{
		while (argv[index])
		{
			input = ft_atoi(argv[index]);
			while (multiple <= 9)
			{
				ft_print_num(multiple);
				write(1, " x ", 3);
				ft_print_num(input);
				write(1, " = ", 3);
				result = multiple * input;
				ft_print_num(result);
				write(1, "\n", 1);
				multiple++;	
			}
			index++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

//* solution 3 ===========================================

#include <unistd.h>
#include <stdio.h>

void printnbr(int n)
{
	if (n >= 10)
		printnbr (n / 10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}

int ft_atoi(char *s)
{
	int index;
	int ret;
	
	index = 0;
	ret = 0;
	while ((s[index]) && (s[index] >= '0' && s[index] <= '9'))
		ret = s[index++] - '0' + (ret * 10);
	return (ret);
}

int main (int argc, char **argv)
{
	int index;
	int base;

	index = 1;
	if (argc > 1)
	{
		base = ft_atoi(argv[1]);
		while (index <= 9)
		{
			printnbr(index);
			write(1, " x ", 3);
			printnbr(base);
			write(1, " = ", 3);
			printnbr(index * base);
			write(1, "\n", 1);
			index++;		
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
