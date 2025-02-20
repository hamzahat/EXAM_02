#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int x = 0;
	while (s1[i])
	{
		x = 0;
		while (s2[x])
		{
			if (s1[i] == s2[x])
				return ((char *)&s1[i]);
			x++;
		}
		i++;
	}
	return (NULL);
}
/*

int main (void)
{
	char *s1 = "hamza_hat";
	char *s2 = "x";
	char *re = ft_strpbrk(s1, s2);
	if (re)
		printf("%c\n",*re);
	else 
		printf("not found\n");
}

*/
