#include <unistd.h>
#include <stdio.h>

//? print the string
void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void to_lower(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str += 32;
		str++;
	}
}

void to_uppercase(char *str)
{
	while (*str)
	{
		if (*str == 32 && ((*(str + 1) >= 97) && (*(str + 1) <= 122) && *str))
			*(str + 1) -= 32;
		str++;
	}
	
}

int main (int ac, char *av[])
{
	int i = 1, j = 0;
	if (ac == 1)
		return (write(1 , "\n", 1));

	while (i < ac)
	{
		to_lower(av[i]);
		if (av[i][j] == 32 || av[i][j] == 9)
			j++;
		if (av[i][j] && (av[i][j] >= 97 && av[i][j] <= 122))
			av[i][j] -= 32;
		to_uppercase(av[i]);
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
