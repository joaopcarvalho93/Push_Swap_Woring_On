/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:38:31 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/23 15:21:24 by jpcarvalho       ###   ########.fr       */
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
			ra(a);
		else
			rra(a);
	}
	pa(a, b);
}
