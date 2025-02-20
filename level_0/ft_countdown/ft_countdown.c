#include <unistd.h>

int main (void)
{
	char i = '9';
	while (i >= '0')
		write(1, &(char){i--}, 1);
	write (1, "\n", 1);
}