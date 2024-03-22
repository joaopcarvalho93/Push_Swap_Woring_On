/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:42:32 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/03/22 14:56:32 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **src, t_stack **dest)
{
	t_stack *tmp;

	if (!*src)
		return (0);
	tmp = *src;
	*src = (*src)->next;
	if (!(*dest))
	{
		*dest = tmp;
		(*dest)->prev = NULL;
		(*dest)->next = NULL;
	}
	else
	{
		tmp->next = *dest;
		(*dest)->prev = tmp;
		*dest = tmp;
	}

	void	pa(t_stack **a, t_stack **b)
	{
		push(a, b);
		ft_print("pa\n");
	}
	void	pb(t_stack **a, t_stack **b)
	{
		push(b, a);
		ft_printf("pb\n");
	}
}