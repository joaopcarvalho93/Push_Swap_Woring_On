/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:03:47 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/16 15:03:53 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void	sort_tree(t_stack **stack)
{
	t_stack	*biggest;

	biggest = find_biggest(*a); //criar
	if ((*stack)->value == biggest->value)
		ra(stack);
	else if ((*stack)->next->value == biggest->value)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}
