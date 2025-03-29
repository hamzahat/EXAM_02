#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list *tmp = begin_list;
	int count = 0;
	while (tmp)
	{
		count += 1;
		tmp = tmp->next;
	}
	return (count);
}
/*
// int main :
#include <stdio.h>
int main (void)
{
	int a = 1, b = 2, c = 3;
	t_list *head;
	head = malloc(sizeof(t_list));
	head->data = &a;
	head->next = malloc(sizeof(t_list));
	head->next->data = &b;
	head->next->next = malloc(sizeof(t_list));
	head->next->next->data = &c;
	head->next->next->next = NULL;

	printf("%d\n", ft_list_size(head));

	for (t_list *tmp = head ; head ; tmp = head)
	{
		head = head->next;
		free(tmp);
	}
	// free it using while loop:
	// t_list *tmp = head;
	// while (head)
	// {
	// 	tmp = head->next;
	// 	free(head);
	// 	head = tmp;
	// }
	system("leaks a.out");
}
*/