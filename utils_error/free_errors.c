/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:34:05 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/23 15:57:53 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_errors(t_stack **stack, char **av, bool flag)
{
	if (flag)
		ft_free_array(av);
	ft_free_stack(stack);
	write(2, "Error\n", 6);
	exit(1);
}
