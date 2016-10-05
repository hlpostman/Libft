/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:43:32 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/04 18:26:12 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard function strtrim().
** Parameters: const string
** Side effect: allocates new memory and puts a string in there that is the
** same as the input string except that any instance of a few "whitespace"
** characters that preceded or followed the rest of the string is removed
** Return value: the string allocated (a copy of s if no "whitespace" was found
** preceding or following s - but note the return will be a new copy, not s
** itself) OR, if the memory allocation failed, NULL.
** In this instance, "whitespace" or characters to be trimmed are: ' ' (space),
** '\n', and '\t'. These are defined in a macro in the header file libft.h.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	trimmed_len;
	size_t	start;
	size_t	end;
	char	*trimmed;

	trimmed_len = 0;
	start = 0;
	if (!s)
		return (0);
	end = ft_strlen(s) - 1;
	while (s[start] && TRIM(s[start]))
		start++;
	while (end >= start && TRIM(s[end]))
		end--;
	trimmed_len = (end - start) + 1;
	trimmed = (char *)ft_memalloc(sizeof(char) * (trimmed_len + 1));
	if (trimmed == NULL)
		return (NULL);
	ft_strncpy(trimmed, (s + start), trimmed_len);
	return (trimmed);
}
