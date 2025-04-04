#include <unistd.h>

int	is_char(char *str)
{
	size_t i = 0;
	while (str[i])
	{
		if (str[i] != 32 && str[i] != 9)
			return (0);
		i++;
	}
	return (1);
}

int main (int ac, char *av[])
{
	if (ac == 2)
	{
		size_t i = 0;
		while (av[1][i] == 32 || av[1][i] == 9)
			i++;
		while (av[1][i])
		{
			char *s = &av[1][i];
			if (is_char(s) == 1)
				break ;
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
