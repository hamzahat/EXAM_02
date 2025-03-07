#if !defined(FT_LIST_SIZE_H)
#define FT_LIST_SIZE_H

# include <stddef.h>
# include <stdlib.h>
typedef	struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

int	ft_list_size(t_list *begin_list);

#endif // FT_LIST_SIZE_H
