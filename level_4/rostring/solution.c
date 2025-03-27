#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

int is_space(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] != 9 && str[i] != 32)
			return 1;
		i++;
	}
	return (0);
}

int main (int ac, char *av[])
{
	if (ac > 1)
	{
		int key = 0;
		int i = 0;

		while (av[1][i] == 9 || av[1][i] == 32)
			i++;
		while (av[1][i] != 9 && av[1][i] != 32 && av[1][i])
			i++;			
		while (av[1][i] == 9 || av[1][i] == 32)
			i++;
		while (av[1][i])
		{
			char *str = &av[1][i];
			if (is_space(str) == 1)
				write(1, &av[1][i], 1);
			if (av[1][i] == 32 || av[1][i] == 9)
			{
				while (av[1][i] == 32 || av[1][i] == 9)
					i++;
			}
			else
				i++;
			key = 1;
		}
		if (key == 1)
			write(1, " ", 1);
		i = 0;
		while (av[1][i] == 9 || av[1][i] == 32)
			i++;
		while (av[1][i] != 9 && av[1][i] != 32 && av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}


