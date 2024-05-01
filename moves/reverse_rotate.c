/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:39:20 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/05/01 23:29:18 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse_ro(t_stack **stack)
{
	t_stack	*last_node;
	t_stack	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	last_node = find_last(*stack);
	tmp = last_node->prev;
	(*stack)->prev = last_node;
	last_node->next = *stack;
	tmp->next = NULL;
	last_node->prev = NULL;
	*stack = last_node;
}

void	rra(t_stack **a)
{
	reverse_ro(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	reverse_ro(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_ro(a);
	reverse_ro(b);
	ft_printf("rrr\n");
}
