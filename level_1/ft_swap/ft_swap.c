void	ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int main (void)
{
	int a = 2;
	int b = 1;
	printf ("a = %d , b = %d\n", a, b );
	ft_swap(&a,&b);
	printf ("a = %d , b = %d\n", a, b );
	return (0);	
}

//todo:  xor_swap fun:

