/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_node_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:54:03 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/16 15:42:16 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// O target_node e o maior numero mais proximo
// target dos nodes do stack b para o a
// Caso nao exista, encontrar numero minimo (match == INT_MAX)

void	set_target_b(t_stack *a, t_stack *b)
{
	t_stack	*node_a;
	t_stack	*target_node;
	int		match;

	if (!a || !b)
		return ;
	while (b)
	{
		match = INT_MAX;
		node_a = a;
		while (node_a)
		{
			if (node_a->value > b->value && node_a->value < match)
			{
				match = node_a->value;
				target_node = node_a;
			}
			node_a = node_a->next;
		}
		if (match == INT_MAX)
			b->target = find_min(a);
		else
			b->target = target_node;
		b = b->next;
	}
}
