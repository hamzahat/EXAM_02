#include <stdio.h>
#include <stdlib.h>

//* Euclidean Algorithm for GCD ( mafiha ma ytefham hefed zmer we ghayarha )
int gcd(int a , int b)
{
	while (b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	return (a);
}

int main (int ac, char *av[])
{
	if (ac == 3) //* If arguments are not exactly 2
	{
		int nb_1 = atoi(av[1]); //*  Convert first argument to int
		int nb_2 = atoi(av[2]); //*  Convert second argument to int

		if (nb_1 <= 0 || nb_2 <= 0) //*  Ensure positive integers
		{
			printf("\n");
			return(0);
		}
		//* Print GCD result
		printf("%d", gcd(nb_1, nb_2)); //! the important part
	}
	printf("\n");
	return (0);
}
