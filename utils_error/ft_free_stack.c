
#include "push_swap/push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*current;
	t_stack	tmp;

	if (!*stack)
		return (0);
	current = *stack;
	tmp = NULL;
	while (current)
	{
		tmp = current->next;
		current->value = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

