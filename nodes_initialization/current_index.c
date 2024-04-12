/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:24:34 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/12 17:34:51 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index(t_stack *stack)
{
	int	i;
	int	median;

	if (!stack)
		return;
	i = 0;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_medium = true;
		else
			stack->above_medium = false;
		i++;
		stack = stack->next;
	}
}
