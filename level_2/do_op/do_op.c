#include <stdlib.h>
#include <stdio.h>

int main (int ac, char *av[])
{
	if (ac == 4)
	{
		int nb_1 = atoi(av[1]);
		int nb_2 = atoi(av[3]);
		if (av[2][0] == '*')
			printf("%d", nb_1 * nb_2);
		else if (av[2][0] == '/')
			printf("%d", nb_1 / nb_2);
		else if (av[2][0] == '+')
			printf ("%d", nb_1 + nb_2);
		else if (av[2][0] == '-')
			printf("%d", nb_1 - nb_2);
		else if (av[2][0] == '%')
			printf("%d", nb_1 % nb_2);
	}
	printf("\n");
	return (0);
}
