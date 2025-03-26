#include "list.h"
#include <unistd.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		tmp_data;
	t_list	*head = lst;
    if (lst == NULL || lst->next == NULL)
        return lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			tmp_data = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp_data;
			lst = head;
		}
		else
			lst = lst->next;
	}
	lst = head;
	return (lst);
}
