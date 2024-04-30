/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:53:03 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/05/01 00:25:15 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	if (!*a || !*b)
		return ;
	cheapest = get_cheapest(*a);
	if (*a != cheapest || *b != cheapest->target)
	{ // meter if primeiro e depois while 
		while ((*a != cheapest && *b != cheapest->target) && (cheapest->above_medium && cheapest->target->above_medium))
			rr(a,b);
		calculate_index(*a);
		calculate_index(*b);
		while ((*a != cheapest && *b != cheapest->target) && (!(cheapest->above_medium) && !(cheapest->target->above_medium)))
			rrr(a,b);
		calculate_index(*a);
		calculate_index(*b);
		to_push(a, cheapest, 'a');
		to_push(b, cheapest->target, 'b');
		pb(a,b);
	}	
}
	// while (*a != cheapest)
	// {
	// 	if (cheapest->above_medium)
	// 		ra(a);
	// 	else
	// 		rra(a);
	// }
	// while (*b != cheapest->target)
	// {
	// 	if (cheapest->above_medium)
	// 		rb(b);
	// 	else
	// 		rrb(b);
	// }
	// pb(b, a);
