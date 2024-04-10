

#include "push_swap/push_swap.h"

// Criar novo node
// verificar se a stack está vazia ou se já tem node
// Adicionar no final da stack

void	append_node(t_stack **stack, int n)
{
	t_stack	*node;
	t_stack	*last_node;

	last_node = NULL;
	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->value = n;
	if (!*stack)
	{
		*stack = node;
		node->prev = node;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}
