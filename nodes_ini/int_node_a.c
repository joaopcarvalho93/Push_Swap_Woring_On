/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_node_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:52:26 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/23 15:34:11 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Primeiro verificar a posicao de cada node com funcao index.
// definir o target de cada node da stack a para b.

void	int_node_a(t_stack *a, t_stack *b)
{
	index(a);
	index(b);
	set_target_node_a(a, b);
	cost_analysis(a, b);
	set_cheapest(a);
}
