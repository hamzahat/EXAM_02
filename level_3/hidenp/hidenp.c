#include <unistd.h>

int main (int ac, char *av[])
{
	size_t i = 0, j = 0;
	int key = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			key = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					key = 1;
					j++;
					break;
				}
				j++;
			}
			if (key == 0)
				return (write(1, "0\n", 2), 0);
			i++;
		}
		return (write(1, "1\n", 2), 1);
	}
	write(1, "\n", 1);
}