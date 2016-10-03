/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 13:51:24 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/02 20:20:13 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard function strsub().
** Parameters: const string s, unsigned int that is index of s at which the
** substring starts, size_t number that is the length of the substring
** Side effect: none, unless taking up some new memory for the new string counts
** Return value: a new string that has the same character at each index i as
** s does at its index (start + i).  I.e., the substring that is s[start] up to
** s[start + (len - 1)], but as its own string in new memory, not just a pointer
** to the place (s + start). Or, if the memory allocation fails, NULL is
** returned.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_sub;

	if (!s)
		return (NULL);
	new_sub = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (new_sub == NULL)
		return (NULL);
	new_sub = (char *)ft_memcpy(new_sub, (const void *)(s + start), len);
	return (new_sub);
}
