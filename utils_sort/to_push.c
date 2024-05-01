/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 22:54:30 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/05/01 16:07:50 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	to_push(t_stack **stack, t_stack *node_to_top, char stack_name)
{
	if (!*stack || !node_to_top)
		return ;
	while (*stack != node_to_top)
	{
		//printf("entrou push: \n");
		if (stack_name == 'a')
		{
			if (node_to_top->above_medium)
				ra(stack);
			else
				rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (node_to_top->above_medium)
				rb(stack);
			else
				rrb(stack);
		}
	}
}