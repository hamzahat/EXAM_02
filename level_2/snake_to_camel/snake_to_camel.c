#include <unistd.h>
int main (int ac, char *av[])
{
	if (ac == 2)
	{
		
		int i = 0;
		// ! this 2 lines are not recomanded in the subject but they make the output better 
		// if (av[1][i])
		// 	write(1, &(char){av[1][i++] - 32}, 1);
		while (av[1][i])
		{
			if (av[1][i] == '_')
				write(1, &(char){av[1][++i] - 32}, 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
