
#include "push_swap.h"

void	sort_tree(t_stack **stack)
{
	t_stack	*biggest;

	biggest = find_biggest(*a); //criar
	if ((*stack)->value == biggest->value)
		ra(stack);
	else if ((*stack)->next->value == biggest->value)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}
