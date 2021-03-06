/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:18:00 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 16:18:49 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard function strjoin().
** Parameters: two const strings
** Side effect: none, other than taking up new memory - unlike strcat() which
** returns a pointer to the front of s1, but also has a side effect of
** modifying s1.  This function leaves s1 and s2 unchanged.
** Return value: new string that is the conactenation of s2 onto s1, or NULL
** if memory allocation failed
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = ft_strnew(len);
	if (joined == NULL)
		return (NULL);
	ft_strcat(joined, s1);
	ft_strcat(joined, s2);
	return (joined);
}
