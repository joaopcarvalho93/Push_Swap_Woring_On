/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 22:54:30 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/30 23:15:47 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	to_push(t_stack **stack, t_stack *node_to_top, char stack_name)
{
	if (!*stack || !node_to_top)
		return ;
	while (*stack != node_to_top)
	{
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