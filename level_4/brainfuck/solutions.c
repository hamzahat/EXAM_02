//* solution 1 =============================================
#include <unistd.h>

int		main(int ac, char **av)
{
	char	*str;
	int	tab[4096];
	int	*ptr;
	int	i;
	int	loop;

	ptr = tab;
	i = 0;
	if (ac == 2)
	{
		str = av[1];
		while (str[i])
		{
			if (str[i] == '+')
				++(*ptr);
			else if (str[i] == '-')
				--(*ptr);
			else if (str[i] == '>')
				ptr++;
			else if (str[i] == '<')
				ptr--;
			else if (str[i] == '.')
				write(1, ptr, 1);
			else if (str[i] == '[' && *ptr == 0)
			{
				loop = 1;
				while (loop != 0)
				{
					i++;
					if (str[i] == '[')
						loop++;
					if (str[i] == ']')
						loop--;
				}
			}
			else if (str[i] == ']' && *ptr != 0)
			{
				loop = 1;
				while (loop != 0)
				{
					i--;
					if (str[i] == ']')
						loop++;
					if (str[i] == '[')
						loop--;
				}
			}
			i++;
		}
			
	}
}

//* solution 1 =============================================

#include <unistd.h>

char	g_bytarr[2048];
char	*g_ptr;
char	*g_arg;

void	issqr()
{
	int br;

	br = 0;
	if (*g_arg == '[')
	{
		while (*g_arg)
		{
			if (*g_arg == '[')
				br++;
			else if (*g_arg == ']')
				br--;
			if (br == 0)
				return;
			g_arg++;
		}
	}
	else
	{
		while (*g_arg)
		{
			if (*g_arg == ']')
				br++;
			else if (*g_arg == '[')
				br--;
			if (br == 0)
				return;
			g_arg--;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		g_arg = argv[1];
		g_ptr = g_bytarr;
		while (*g_arg )
		{
			if (*g_arg == '>')
				g_ptr++;
			else if (*g_arg == '<')
				g_ptr--;
			else if (*g_arg == '+')
				(*g_ptr)++;
			else if (*g_arg == '-')
				(*g_ptr)--;
			else if (*g_arg == '.')
				write(1, g_ptr, 1);
			else if (*g_arg == '[')
			{
				if (*g_ptr == 0)
					issqr();
			}
			else if (*g_arg == ']')
			{
				if (*g_ptr != 0)
					issqr();
			}
			g_arg++;
		}		
	}
	else
		write(1, "\n", 1);
	return (0);
}
