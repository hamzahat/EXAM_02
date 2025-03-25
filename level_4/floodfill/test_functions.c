#include "flood_fill.h"

char	**make_area(char *zone[], t_point size)
{
	int x  = 0, y = 0;
	char	**arr;

	arr = malloc(sizeof(char *) * (size.y + 1));
	while (y < size.y)
	{
		x = 0;
		arr[y] = malloc(sizeof(char) * (size.x + 1));
		while (x < size.x)
		{
			arr[y][x] = zone[y][x];
			x++;
		}
		arr[y][x] = 0;
		y++;
	}
	arr[y] = NULL;
	return (arr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab(char **tab, t_point size)
{
	int y = 0, x = 0;
	while (y < size.y)
	{
		x = 0;
		while (x < size.x)
			ft_putchar(tab[y][x++]);	
		ft_putchar('\n');
		y++;
	}
}
