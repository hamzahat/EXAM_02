#ifndef FLOOD_FILL
# define FLOOD_FILL


typedef struct s_point
{
	int x;
	int y;
}	t_point;

# include <stdlib.h>
# include <unistd.h>

void	print_tab(char **tab, t_point size);
char	**make_area(char *zone[], t_point size);
void	ft_putchar(char c);

#endif
