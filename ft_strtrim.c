/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:43:32 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 16:21:08 by hpostman         ###   ########.fr       */
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
	unsigned int	i;
	size_t			len;
	char			*trimmed;

	if (!s)
		return (0);
	i = 0;
	while (TRIM(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && TRIM(s[len]))
		len--;
	if (len < i)
		return (trimmed = ft_strdup(""));
	return (trimmed = ft_strsub(s, i, len - (size_t)i + 1));
}
