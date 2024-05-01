/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:24:16 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/05/01 16:11:50 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Comecar por verificar se a stack a tem menos de 4 nodes.
// Se tiver menos fazer sort. Se tiver mais abrir nova funcao

void	sort_stack(t_stack **a, t_stack **b)
{
	if (!a)
		return ;
	if (stack_len(*a) == 2)
		sa(a);
	else if (stack_len(*a) == 3)
		sort_tree(a);
	else
		sort_stacks_a_b(a, b);
	printf("stack a no final\n");
	print_stack(*a);
	printf("stack b no final\n");
	print_stack(*b);
}
