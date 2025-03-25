//! Flood fill algorithm
#include "flood_fill.h"

void	flood_fill_recur(char **tab, t_point size, int x , int y, char target)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y)
		return;
	if (tab[y][x] != target)
		return;
	tab[y][x] = 'F';
	flood_fill_recur(tab, size, x + 1, y, target);
	flood_fill_recur(tab, size, x - 1, y, target);
	flood_fill_recur(tab, size, x, y + 1, target);
	flood_fill_recur(tab, size, x, y - 1, target);
}

void	flood_fill(char *tab[], t_point size, t_point begin)
{
	char target = tab[begin.x][begin.y];

	if (target == 'F') //* if it's already 'F' , no need to fill
		return;
	flood_fill_recur(tab, size, begin.x, begin.y, target);
}
/*
#include "flood_fill.h"

int main(void)
{
        char *zone[] = {
                "11111111",
                "10001001",
                "10010001",
                "10110001",
                "11100001"
        };

        t_point size = { 8, 5 };
        t_point begin = { 6, 4 };

        char **area = make_area(zone, size);

        print_tab(area, size);
        flood_fill(area, size, begin);
        ft_putchar('\n');
        print_tab(area, size);
        return (0);
}
*/