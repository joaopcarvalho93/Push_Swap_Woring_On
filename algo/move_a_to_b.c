/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:53:03 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/24 17:07:19 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	if (!*a || !*b)
		return ;
	cheapest = get_cheapest(*a);
	while (*a != cheapest)
	{
		if (cheapest->above_medium)
			ra(a);
		else
			rra(a);
	}
	while (*b != cheapest->target)
	{
		if (cheapest->above_medium)
			rb(b);
		else
			rrb(b);
	}
	pb(b, a);
}
