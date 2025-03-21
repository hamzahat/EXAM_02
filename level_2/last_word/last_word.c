#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i++]);
	return (--i);
}
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int len = ft_strlen(av[1]);
		len--;
		while ((av[1][len] == ' ' || av[1][len] == '\t') && len > 0)
			len--;
		if (len == -1)
			len++;
		while (av[1][len] != ' ' && av[1][len] != '\t' && len >= 0)
			len--;
		len++;
		while (av[1][len] != ' ' && av[1][len] != '\t' && av[1][len])
		{
			write(1, &av[1][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
