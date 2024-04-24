/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_analysis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:26:46 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/23 15:33:52 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Analisar o custo de push de a para o target na b.
// Verificar o custo para todos os nodes na a.
// o custo varia se o node esta acima ou abaixo da mediana.
// Se tiver em cima o custo e o index.
// se tiver em baixo e o len - index.
// O total e a soma do custo para mover na a e b.
// PARA MELHORAR: ter em consideracao que podemos em 
// alguns casos mover as duas stacks

void	cost_analysis(t_stack *a, t_stack *b)
{
	int	len_a;
	int	len_b;

	if (!a || !b)
		return ;
	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->above_medium))
			a->push_cost = len_a - (a->index);
		if (a->target->above_medium)
			a->push_cost += a->target->index;
		else
			a->push_cost += len_b - (a->target->index);
		a = a->next;
	}
}
