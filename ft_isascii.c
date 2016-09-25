/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 20:23:06 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 20:29:31 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function isascii(3).
** Parameters: integer c, possibly in ASCII or extended ASCII range, but
** allowed to be anywhere between MAX_INT and MIN_INT inclusive
** Side effect: none
** Return value: the manual page doesn't say.  this implemenation returns
** 1 if c is in range 0 and octal 0177 inclusive, and 0 if it is not (some
** functions like this return c if the condition is true, but in this case,
** that would make it an ambiguous function - when the return value was 0, you
** would not know if c == 0, or c was out of ASCII range, hence the choice
** to return 1 if c is in ASCII range, independent of whatever exact ASCII
** value it has, and 0 if it is not in ASCII range).
** Note, octal 0177 is decimal 127.  So this function returns 0 (false) if
** c is strictly in extended ASCII range.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
