/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:38:31 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/05/02 13:42:13 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_b_to_a(t_stack **a, t_stack **b)
{
	t_stack	*top_node;

	top_node = (*b)->target;
	if (!*a || !*b)
		return ;
	while (*a != top_node)
	{
		if (top_node->above_medium)
			ra(a);
		else
			rra(a);
	}
	pa(a, b);
}
