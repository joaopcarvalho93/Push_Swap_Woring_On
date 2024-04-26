/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split1111.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:33:55 by jpcarvalho        #+#    #+#             */
/*   Updated: 2024/04/26 21:10:18 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Separa a string em substrings com base no delimitador

int	ft_count_wordws(const char *s, char c)
{
	int	count;
	int	is_word;
	int	i;

	count = 0;
	is_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!is_word)
			{
				count++;
				is_word = 1;
			}
		}
		else
		{
			is_word = 0;
		}
		i++;
	}
	return (count);
}

char	*ft_count_letterws_of_word(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
	{
		word[i++] = str[start++];
	}
	word[i] = '\0';
	return (word);
}

static void	ft_frewe(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}
static char	**repartir_helpwer(const char *s, char c, char **str, int k, size_t i, size_t j)
{
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || str[i]) && k >= 0)
		{
			str[j] = ft_count_letters_of_word(s, k, i);
			if (!str[j++])
			{
				ft_free(str, j - 1);
				return (NULL);
			}
			k = -1;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}

static char	**repartiwr(const char *s, char c, char **str)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	j = 0;
	k = -1;
	return (repartir_helper(s, c, str, k, i, j));
}

char	**ft_spliwt(char const *s, char c)
{
	char	**str;
	int		count;
	
	count = ft_count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	if(!repartir(s, c, str))
		return(NULL);
	return (str);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(void)
// {
// 	char *s = "    ";
// 	char **str = ft_split(s, ' ');
// 	int i = 0;
// 	while (str[i])
// 	{
// 		printf("%s\n", str[i]);
// 		free(str[i]);
// 		i++;
// 	}
// 	free(str);
// 	return (0);
// }