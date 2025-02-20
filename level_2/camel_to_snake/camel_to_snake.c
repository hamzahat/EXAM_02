#include <unistd.h>

int main (int ac, char *av[])
{
	if (ac == 2)
	{
		int i = 0;
		// if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		// 	write(1, &av[1][i++], 1);
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] += 32;
				write(1, "_", 1);
			}
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}


/*

 * The reason write(1, &av[1][i++], 1); 
 * works is that av[1] points to a string, 
 * and av[1][i++] gives a character.
 * The key is &av[1][i++], 
 * which returns the address of the character in memory.

 * On the other hand,
 * &i-- doesn't work because i-- is an rvalue. 
 * Since the result of i-- isn't a valid memory location, 
 * taking its address causes an error. 
 * Using (char){i--} creates a temporary object with a valid memory address.

*/
