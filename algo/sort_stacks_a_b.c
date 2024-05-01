/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks_a_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:20:57 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/05/01 16:12:24 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Comecar por passar os dois primeiros nodes para a stack b.
// Se a continuar a ter 3 ou mais e nao estar organizado
// chamar init_node_a para fazer reset e estabelecer novos
// valores de posicao dos nodes
// Depois de encontrado o node mais barato de mover chamar
// move_a_to_b e vocer de a para b.

void	sort_stacks_a_b(t_stack **a, t_stack **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && !is_sorted(*a))
		pb(a, b);
	if (len_a-- > 3 && !is_sorted(*a))
		pb(a, b);
	while (len_a-- > 3 && !is_sorted(*a))
	{
		printf("lena: %d\n", stack_len(*a));
		printf("lenb: %d\n", stack_len(*b));
		printf("stacAkordem :\n ");
		print_stack(*a);
		int_node_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_tree(a);
	while (*b)
	{
		printf("moveblena: %d\n", stack_len(*a));
		//printf("moveblenb: %d\n", stack_len(*b));
		//printf("movebstacBkordem :\n ");
		//print_stack(*b);
		int_node_b(*a, *b);
		move_b_to_a(a, b);
	}
	calculate_index(*a);
	min_top(a);
}

