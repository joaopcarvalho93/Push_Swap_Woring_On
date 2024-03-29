

#include "push_swap.h"

static void	reverse_ro(t_stack **stack)
{
	t_stack	*last_node;

	if (!*stack || !(*stack)->next)
		return (0);
	last_node = find_last(*stack);
	(*stack)->prev = last_node;
	last_node->prev->next = NULL;
	last_node->next = *stack;
	last_node->prev = NULL;
	*stack = last_node;
}

void	rra(t_stack **a)
{
	reverse_ro(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	reverse_ro(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_ro(a);
	reverse_ro(b);
	ft_printf("rrr\n");
}
