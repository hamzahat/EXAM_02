#include <unistd.h>

int main (int ac, char *av[])
{
	int i = 0;
	int y = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				y = av[1][i]; 	//! remember this 
				while (y >= 'a')//! remember this 
				{
					write(1, &av[1][i], 1);
					y--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				y = av[1][i]; 	//! remember this 
				while (y >= 'A')//! remember this 
				{
					write(1, &av[1][i], 1);
					y--;
				}
			}
			else
				write(1, &av[1][i], 1);
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
