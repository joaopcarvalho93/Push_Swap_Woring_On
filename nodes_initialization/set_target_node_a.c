/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_node_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:41:49 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/12 18:23:21 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// O target_node e o numero mais pequeno mais proximo
// Caso nao exista encontrar numero maximo (match == INT_MIN)

void	set_target_node_a(t_stack *a, t_stack *b)
{
	t_stack	*node_b;
	t_stack	*target_node;
	int		match;

	if (!a || !b)
		return;
	while (a)
	{
		match = INT_MIN;
		node_b = b;
		while (node_b)
		{
			if(node_b->value > match && node_b->value < a->value)
			{
				match = node_b->value;
				target_node = node_b;
			}
			node_b = node_b->next;
		}
		if (match == INT_MIN)
			a->target = find_max(b);
		else
			a->target = target_node;
		a = a->next;
	}
}