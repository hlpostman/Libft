/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 12:54:59 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 13:39:40 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard function strequ().
** Parameters: two const strings
** Side effect: none
** Return value: 1 if the two strings are the same, 0 if not (same meaning
** what is held at a given index is the same in each string - not that the
** memory address is the same necessarily, though it should return 1 in the
** case that it is passed the same pointer for each argument)
** This function is like strcmp(), but rather than returning the difference
** of the values, it returns 0 when they differ (opposite of strcmp() - careful)
** and 1 when they're the same.
** Note that I could  call ft_memcp() directly where I call ft_strcmp();
** ft_strcmp() is based on ft_memcmp().  Calling ft_memcmp() might be a little
** more effecient, so it's worth noting. To implement this with a direct call
** to ft_memcmp, calculate the length of the two strings and pass it as the
** third argument to ft_memcmp(), and test for length inequality first.
*/

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		if (ft_strlen(s1) != ft_strlen(s2))
			return (0);
		if (ft_strcmp(s1, s2) == 0)
			return (1);
	}
	return (0);
}
