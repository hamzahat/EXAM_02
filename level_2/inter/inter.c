#include <unistd.h>
#include <stdio.h>
int	ft_valide(char *str, char c, int len)
{
	int i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main (int ac, char *av[])
{
	if (ac == 3)
	{
		int i = 0;
		int x = 0;
		while (av[1][i])
		{
			x = 0;
			while (av[2][x])
			{
				if (av[1][i] == av[2][x] && ft_valide(av[1], av[1][i], i) == 0)
				{
					write(1, &av[1][i], 1);
					break;
				}
				x++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// ? output : 
/* 

the output will be : 

$> ./inter "hello" "hahaha"
* output : h
$> ./inter "aaaaaaa" "aa"
* output : a
$> ./inter "42" "24"
* output : 42
$> ./inter "abcd" "efgh"
* output : \n 

*/