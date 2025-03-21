#include <stdlib.h>

char *ft_itoa(int nb)
{
	char	*result;
	long	num;
	int		len;

	num = nb;

	len = (nb <= 0 ? 2 : 1);

	while(nb && ++len)
		nb /= 10;

	if (!(result = malloc(sizeof(char) * len)))
		return (NULL);

	result[--len] = 0;

	if (num <= 0)
		result[0] = (num < 0 ? '-' : 0);

	while(num)
	{
		result[--len] = (num < 0 ? -num : num) % 10 + 48;
		num /= 10;
	}
	return (result);
}

#include <stdio.h>

int main (void)
{
	printf("%s\n", ft_itoa(1337));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(21));
	return (0);
}

//algo:
/*
* handle MIN_INT ( using long )
* calculate len of '-' + '\0'
* handle 0 case
* calculate the length of the number
* allocate memory for the numbre
* put the '\0' at the end of str
* if nb is negative or '0' put '-' at the start otherwise 0
* copy the number in the string starting frome the right
* return str ( the number )
*/
