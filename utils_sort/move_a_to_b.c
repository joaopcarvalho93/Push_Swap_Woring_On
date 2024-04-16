/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:53:03 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/16 16:58:14 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_a_to_b(t_stack *a, t_stack *b)
{
	t_stack	cheapest;
	
	if (!a || !b)
		return ;
	cheapest = get_cheapest(*a); //criar
	
}