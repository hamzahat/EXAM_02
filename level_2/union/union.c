#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i++]);
	return (--i);
}

int ft_check(char *s, int i, char c)
{
	while (i--)
	{
		if (s[i] == c)
			return (1);
	}
	return (0);
}

int main (int ac, char *av[])
{
	if (ac == 3)
	{
		char *tmp = malloc(ft_strlen(av[1]) + ft_strlen(av[2]) + 1);
		if (!tmp)
			return (1);
		int i = 0;
		int x = 0;
		while (av[1][i])
			tmp[x++] = av[1][i++];
		i = 0;
		while (av[2][i])
			tmp[x++] = av[2][i++];
		tmp[x] = 0;
		x = 0;
		while (tmp[x])
		{
			if (ft_check(tmp, x, tmp[x]) == 0)
				write(1, &tmp[x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//? pesudo code :
/*
* jem3 dok 2 strings f 1 string 
* we fkol mera 9bel ma tprinti dak char cheki wach kayn f dik string 
* ( indix li weselti fih daba ( ya3ni matchikich string kooolha ))

* sahl sahl, machi chi haja easy bro ( done )
*/
