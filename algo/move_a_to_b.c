/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:53:03 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/05/02 13:41:54 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	if (!*a || !*b)
		return ;
	cheapest = get_cheapest(*a);
	if ((*a != cheapest && *b != cheapest->target))
	{
		if ((cheapest->above_medium && cheapest->target->above_medium))
		{
			while ((*a != cheapest && *b != cheapest->target))
				rr(a, b);
		}
		else if ((!(cheapest->above_medium)
				&& !(cheapest->target->above_medium)))
		{
			while ((*a != cheapest && *b != cheapest->target))
				rrr(a, b);
		}
		calculate_index(*a);
		calculate_index(*b);
	}
	to_push(a, cheapest, 'a');
	to_push(b, cheapest->target, 'b');
	pb(a, b);
}
