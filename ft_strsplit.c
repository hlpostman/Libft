/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 14:16:05 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 21:50:46 by hpostman         ###   ########.fr       */
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

char			**ft_strsplit(char const *s, char c)
{
	char	**result;
	size_t	num_words;
	size_t	start_str;
	size_t	end_str;
	size_t	i;

	if (s)
	{
		num_words = ft_count_delim(s, c);
		result = (char **)ft_memalloc(sizeof(char *) * (num_words + 1));
		if (result == NULL)
			return (NULL);
		start_str = 0;
		end_str = 0;
		i = 0;
		while (i < num_words)
		{
			while (s[start_str++] == c)
				;
			end_str = start_str;
			while (s[end_str++] != c)
				;
			result[i] = ft_strsub(s, start_str - 1, (end_str - start_str - 1) + 1);
			i++;
		}
		return (result);
	}
	return (NULL);
}
