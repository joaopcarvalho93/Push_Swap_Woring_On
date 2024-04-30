/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:12:45 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/30 21:17:41 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_stack(t_stack **stack)
{
	t_stack	*current;
	t_stack	*tmp;

	if (!*stack)
		return;
	current = *stack;
	tmp = NULL;
	while (current)
	{
		//ft_printf("free1\n");
		tmp = current->next;
		//printf("curr: %p\n", current);
		//printf("curr->next: %p\n", current->next);
		//printf("temp: %p\n", tmp);
		//ft_printf("free2\n");
		current->value = 0;
		free(current);
		current = tmp;
		//ft_printf("free3\n");
	}
	//ft_printf("free4\n");
	*stack = NULL;
}
