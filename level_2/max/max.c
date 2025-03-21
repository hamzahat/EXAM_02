int	max(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int tmp = tab[0];
	while (len--)
	{
		if (tab[len] > tmp)
			tmp = tab[len];
	}
	return (tmp);
}
/*

#include <stdio.h>
int main (void)
{
	int arr[] = {-5, -2, -8};
	int larg = max(arr, 3);
	printf("largest number foun in the array = %d\n", larg);
}

*/