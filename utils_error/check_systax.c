/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_systax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:39:41 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/23 15:57:47 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_syntax(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	if ((str[0] == '+' || str[0] == '-') && str[1] != '\0')
		i++;
	if (str[0] == ' ')
		return (1);
	while (ft_isdigit(str[i]))
		i++;
	if (i >= 1 && str[i] == '\0')
		return (0);
	return (1);
}
