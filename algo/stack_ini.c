/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:38:56 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/26 17:15:55 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

// Objectivo criar uma stack com os valores dados no input.
// Verificar se:
// - Existem valores duplicados 
// - Erros de syntax 
// - Over ou untherflow

// usar a flag se for verdadeiro fazer free a AV

void	stack_ini(t_stack **stack, char **av, bool flag)
{
	int		i;
	long	n;

	i = 0;
	if (!av)
		free_errors(stack, av, flag);
	while (av[i])
	{
		if (check_syntax(av[i]))
			free_errors(stack, av, flag);
		n = ft_atol(av[i]);
		if (n > INT_MAX || n > INT_MIN)
			free_errors(stack, av, flag);
		if (check_duplicate(*stack, (int)n))
			free_errors(stack, av, flag);
		append_node(stack, (int)n);
		i++;
	}
}
