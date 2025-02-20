// hadi hya solution dyali hhh . wakha kbira 9adya leghard 

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i++]);
	return (--i);
}
int main (int ac, char *av[])
{
	int i = 0;
	int x = 0;
	if (ac == 3)
	{
		int len = ft_strlen(av[1]);
		char tmp[len + 1];
		while (av[1][i])
		{
			while (av[2][x])
			{
				if (av[1][i] == av[2][x])
				{
					tmp[i] = av[1][i];
					break;
				}
				x++;
			}
			if(av[2][x] == 0)
			{
				write(1, "\n", 1);
				return (1);
			}
			i++;
		}
		tmp[i] = 0;
		ft_putstr(tmp);
	}
	write(1, "\n", 1);
	return (0);
}

// ! hada logic m9awad . howa li khas tedir !!! 

#include <unistd.h>

int main (int argc, char **argv)
{
	int length = 0;
	int index1 = 0;
	int index2 = 0;

	if (argc == 3)
	{
		while (argv[1][index1] && argv[2][index2])
		{
			if (argv[1][index1] == argv[2][index2++])
				index1++;
		}
		if (argv[1][index1] == '\0')
		{
			while(argv[1][length])
				write(1, &argv[1][length++], 1);
		}			
	}
	write(1, "\n", 1);
	return (0);
}

