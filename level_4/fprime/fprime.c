#include <stdio.h>
#include <stdlib.h>

int main (int ac, char *av[])
{
	if (ac != 2)
		return (printf("\n"));
	int nb = atoi(av[1]);
	int dev = 2;
	int key = 1;
	if (nb == 1)
		printf("1\n");
	while (nb >= dev)
	{
		if (nb % dev == 0)
		{
			(key) ? key = 0 : printf("*");
			printf("%d", dev);
			nb /= dev;
		}
		else
			dev++;
	}
	printf("\n");
	return (0);
}
