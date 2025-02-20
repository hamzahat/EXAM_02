int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if ((n & (n - 1)) ==  0)
		return (1);
	return (0);
}

#include <stdio.h>
int main (void)
{
	printf("%d\n",is_power_of_2(16));
	printf("%d\n",is_power_of_2(5));
	return 0;
}

// chat gpt code:
/*

int is_power_of_2(unsigned int n)
{
    return (n != 0 && (n & (n - 1)) == 0);
}

*/
