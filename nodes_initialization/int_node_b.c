/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_node_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:25:42 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/17 17:34:01 by jhorta-c         ###   ########.fr       */
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