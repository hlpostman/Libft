/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:32:15 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 19:38:01 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function strcmp(3).
** Paramters: const string1, const string2
** Side effects: none
** Return value: 0, if string1 and string2 are the same, or an integer
** representing the difference of the (unsigned char)string1[first place
** of difference] and (unsigned char)string2[same index as in string1]
** Comparison is done using unsigned chars as said in the manual page.
*/

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	return (ft_memcmp(s1, s2, ft_strlen(s2)));
}
