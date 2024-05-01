/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:53:03 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/05/01 16:08:04 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	if (!*a || !*b)
		return ;
	cheapest = get_cheapest(*a);
	//printf("cheapest: %d\n", cheapest->value);
	if (*a != cheapest || *b != cheapest->target)
	{
		while ((*a != cheapest && *b != cheapest->target))
		{
			if ((cheapest->above_medium && cheapest->target->above_medium))
				rr (a,b);
			if ((!(cheapest->above_medium) && !(cheapest->target->above_medium)))
				rrr (a,b);
			calculate_index(*a);
			calculate_index(*b);
			//printf("sentrocu  :\n ");
		}
	}
	to_push(a, cheapest, 'a');
	to_push(b, cheapest->target, 'b');
	pb (a,b);
}
