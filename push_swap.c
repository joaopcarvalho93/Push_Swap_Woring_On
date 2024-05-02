/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:24:38 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/05/02 18:25:05 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

// - Criar as duas stacks
// - Limpar a memoria da stack A e B == NULL
// - Flag verificar se tivemos o input correto
// - Se AC for 2 fazer split para dividir uma array por numero
// - Chamar funcao para meter as arrays na stack A
// - Verificar se AC e > 2 e mandar flag false

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (1);
	else if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		stack_ini(&a, av, true);
		ft_free_array(av);
	}
	else
		stack_ini(&a, av + 1, false);
	while (!is_sorted(a))
		sort_stack(&a, &b);
	ft_free_stack(&a);
	return (0);
}
