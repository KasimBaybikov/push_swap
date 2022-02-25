#include "push_swap.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *plst;

	if (!lst)
		return ;
	plst = *lst;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	while (plst->n)
		plst = plst->n;
	plst->n = new;
}

t_list	*ft_lstnew(int data)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->data = data;
	new->n = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	new->n = *lst;
	*lst = new;
}
