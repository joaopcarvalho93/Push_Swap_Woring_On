/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_find.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:39:34 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/12 18:19:14 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_stack	find_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	
}


t_stack find_max(t_stack *stack)
{
	int	max;
	t_stack *max_node;
	
	if(!stack)
		return (NULL);
	max = INT_MIN;
	max_node = NULL;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

t_stack find_min(t_stack *stack)
{
	
}