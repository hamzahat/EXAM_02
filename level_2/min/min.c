int	min(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int tmp = tab[0];
	while (len--)
	{
		if (tab[len] < tmp)
			tmp = tab[len];
	}
	return (tmp);
}

#include <stdio.h>
int main (void)
{
	int arr[] = {-1 , 2, 3, 5, 10, 4, 3, 6};
	int minmum = min(arr, 8);
	printf ("the minimum number in the array is %d\n", minmum);
}
