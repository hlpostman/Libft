/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 13:33:15 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/25 13:50:23 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard function strnequ().
** Parameters: two const strings, a number "n" of type size_t that represents
** the maximum number of places in the two strings to be compared
** Side effect: none
** Return value: 1 if the first n characters of the two strings are the same,
** 0 if not.  If one of the strings has length less than n, 1 is returned if
** characters at indicies 0 through min(len_s1, len_s1) are the same, 0 if
** not.
*/

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	return (0);
}
