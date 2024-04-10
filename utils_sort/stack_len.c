

#include "push_swap.h"


int	stack_len(t_stack *stack)
{
	int	len;

	if (!stack)
		return (NULL);
	len = 0;
	while (stack)
	{
		stack = stack->next;
		len++;
	}
	return (len);
}

