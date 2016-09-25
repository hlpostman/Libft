/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:55:15 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 20:02:19 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the outdated Standard C Library function isdigit(3).
** Parameters: integer c (probably in ASCII or extended ASCII range)
** Side effect: none
** Return value: 0 if c is NOT a digit, some non-zero integer otherwise is all
** that is specified in the manual page - this could be c, or 1, here it is 1
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (((unsigned char)c - '0') >= 0 && (((unsigned char)c - '0' <= 9)))
		return (1);
	return (0);
}
