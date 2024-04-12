
#include "push_swap.h"

// Meter maior numero em baixo
// Verificar qual o menor 1º ou 2º e swap se necessário
// Por testar



void	sort_stack(t_stack **a, t_stack **b)
{
	t_stack	biggest;

	if (!a)
		return (0);
	if (stack_len(a) == 2)
		sa(&a);
	else if (stack_len(a) == 3)
		sort_tree(&a)
	else
		sort_stacks_a_b(&a, &b); //criar
}
