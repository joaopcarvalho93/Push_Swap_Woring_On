/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:38:31 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/30 17:06:41 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_b_to_a(t_stack **a, t_stack **b)
{
	if (!*a || !*b)
		return ;
	while (*a != (*b)->target)
	{
		if ((*b)->target->above_medium)
		{
			ra(a);
		}
		else
			rra(a);
	}
	pa(a, b);
}
