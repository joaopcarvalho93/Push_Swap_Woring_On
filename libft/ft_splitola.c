/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:39:17 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/30 14:01:48 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Separa a string em substrings com base no delimitador

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}
static int	ft_alloc_free(char **str, int f, int j)
{
	str[f] = (char *)malloc(j + 1);
	if (str[f] == NULL)
	{
		while (f >= 0)
		{
			free(str[f]);
			f--;
		}
		free(str);
		return (1);
	}
	return (0);
}

static void	ft_copy(char const *s, char *str, char c)
{
	int	i;
	
	i = 0;
	while (s[i] && str[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
}

char	**repartir(char const *s, char c, char **str)
{
	int i;
	int	j;
	int	count;
	int	error;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		error = ft_alloc_free(str, count, j);
		if (error)
			return (NULL);
		ft_copy(s + i, str[count++], c);
		i += j;
	}
	str[count] = NULL;
	return (str);
}


char	**ft_split(char const *s, char c)
{
	char	**str;
	
	str = (char **)malloc((count_words(s, c) + 1) * sizeof(unsigned char *));
	if (!str)
		return (NULL);
	if (!repartir(s, c, str))
		return(NULL);
	return (str);
}