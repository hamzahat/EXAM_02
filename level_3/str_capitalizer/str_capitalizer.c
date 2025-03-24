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
	int i = 0;

	while (str[i])
	{
		//* If it's the first character or follows a space/tab
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
}

int main (int ac, char *av[])
{
	int i = 1;
	if (ac == 1)
		return (write(1 , "\n", 1));

	while (i < ac)
	{
		to_lower(av[i]);
		to_uppercase(av[i]);
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
