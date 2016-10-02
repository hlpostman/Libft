/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:39:12 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/02 15:41:14 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function strncmp().
** Parameters: const string1, const string2, number of places in string2
** to compare to compare up, as type size_t, called "n"
** Side effect: none
** Return value: 0 if the first n characters of string1 and string2 are the
** same; integer representing the difference of the unsigned chars at the
** place of difference in string1, string2 (so string1[i] - string2[i]), it
** could be either negative or positive.
** Comparison is done with unsigned chars as noted in manual page - ft_memcmp
** comparison is implemented with unsigned char casting.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (ft_min(ft_strlen(s1), ft_strlen(s2)) < n)
		n = ft_min(ft_strlen(s1), ft_strlen(s2)) + 1;
	return (ft_memcmp(s1, s2, n));
}
