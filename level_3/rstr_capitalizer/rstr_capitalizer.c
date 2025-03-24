#include <unistd.h>

// //? check for white spaces
// int is_space(char *str)
// {
// 	while (*str)
// 	{
// 		if((*str < 9 || *str > 13) && *str != 32)
// 			return (1);
// 		str++;
// 	}
// 	return (0);
// }

//? print the string
void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

//? make all the string in lower case
void to_lower(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
}

//? make the last character of the word in upercase
void last_to_upper(char *str)
{
	while (*str)
	{
		if (*(str + 1) == 9 || *(str + 1) == 32 || *(str + 1) == 0)
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
		}
		str++;
	}
}

int main (int ac, char *av[])
{
	int i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			to_lower(av[i]);
			last_to_upper(av[i]);
			// if (is_space(av[i]))
				ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}
