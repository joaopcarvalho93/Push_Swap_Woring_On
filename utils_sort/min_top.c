/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_top.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:59:23 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/17 18:28:26 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//No final verificar se o numero menor esta em cima.

void	min_top(t_stack **a)
{
	t_stack	*min_nbr;
	
	if (!*a)
		return ;
	min_nbr = find_min(*a);
	while ((*a)->value != min_nbr->value)
	{
		if (min_nbr->above_medium)
			ra(a);
		else
			rra(a);
	}	
}