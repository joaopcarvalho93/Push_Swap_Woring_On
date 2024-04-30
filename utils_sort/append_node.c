/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:13:15 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/30 16:00:11 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
		return ;
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
