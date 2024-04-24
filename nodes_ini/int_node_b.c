/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_node_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:25:42 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/23 15:34:25 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Verificar a posicao de cada node
// Verificar o target node

void	int_node_b(t_stack *a, t_stack *b)
{
	index(a);
	index(b);
	set_target_b(a, b);
}
