int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i = 0;
	int len = ft_strlen(str);
	while (i < len / 2)
	{
		char tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
	return (str);
}
/*

#include <stdio.h>

int main (void)
{
	char str[] = "dcba";
	printf ("%s\n",ft_strrev(str));
	return (0);
}

*/
