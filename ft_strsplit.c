/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 14:16:05 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 22:15:45 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard function strsplit().
** Parameters: const string to split, character c as deliminator to split on
** Side effect: create an array of strings where each string is the string
** split by the deliminator c, the first substring in place 0 of the return
** array, the second in the place 1 of the return array and so forth
** Return value: the array of substrings deliminated on the character c from
** the string passed as argument - or, if the memory allocation fails, NULL
** is returned
*/

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**result;
	size_t	num_words;
	size_t	start;
	size_t	end;
	size_t	i;

	num_words = ft_count_delim(s, c);
	result = (char **)ft_memalloc(sizeof(char *) * (num_words + 1));
	if (!s || result == NULL)
		return (NULL);
	start = 0;
	end = 0;
	i = 0;
	while (s && i < num_words)
	{
		while (s && s[start++] == c)
			;
		end = start;
		while (s && s[end++] != c)
			;
		result[i] = ft_strsub(s, start - 1, (end - start - 1) + 1);
		start = end;
		i++;
	}
	return (result);
}
