/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:46:39 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/26 21:11:13 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int		i = 0;
	char	string[] = " w ergeh45 5464747 35656  ola rfrfrf ";
	char	**strings;

	strings = ft_split(string, ' ');
	while (strings[i])
	{
		printf("%s\n", strings[i]);
		i++;
	}
	return (0);
}