#include <unistd.h>

int main (void)
{
	char i = 'Z';
	while (i >= 'A')
	{
		if ((i % 2) == 0) // even
			write(1, &(char){i + 32}, 1);
		else
			write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}