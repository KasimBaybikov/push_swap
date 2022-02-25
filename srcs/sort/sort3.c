#include "push_swap.h"

void	sort3(t_stacks *stacks)
{
	t_list *a;

	a = stacks->a;
	if (a->i > a->n->i && stacks->size == 2)
		return (sa(stacks));
	if (a->i < a->n->i && a->i < a->n->n->i && a->n->i > a->n->n->i)
	{
		sa(stacks);
		return (ra(stacks));
	}
	if (a->i > a->n->i && a->i < a->n->n->i && a->n->i < a->n->n->i)
		return (sa(stacks));
	if (a->i < a->n->i && a->i > a->n->n->i && a->n->i > a->i)
	{
		ra(stacks);
		return (ra(stacks));
	}
	if (a->i > a->n->i && a->i > a->n->n->i && a->n->i < a->n->n->i)
		return (ra(stacks));
	if (a->i > a->n->i && a->i > a->n->n->i && a->n->i > a->n->n->i)
	{
		ra(stacks);
		return (sa(stacks));
	}
}
