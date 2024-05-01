

#include "../push_swap.h"
#include <stdio.h>

int main (void)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	stack_ini(&a, "3 2 1", true);
	stack_ini(&b, "4 5 6", true);
	move_a_to_b(&a, &b);
	print_stacks(a, b);
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}