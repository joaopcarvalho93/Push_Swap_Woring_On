/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:06:10 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/16 16:37:53 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Depois de calcular o custo encontar o node que tem o menor custo.
// Definir variavel para o INT_MAX e ir valor a valor a ver que node tem o menor.
// Devolver verdadeiro ou falso

void	set_cheapest(t_stack *stack)
{
	int		cheapest;
	t_stack	*cheapest_node;

	if (!stack)
		return ;
	cheapest = INT_MAX;
	while (stack)
	{
		if (stack->push_cost < cheapest)
		{
			cheapest = stack->push_cost;
			cheapest_node = stack;
		}
		else
			stack->cheapest = false;
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}