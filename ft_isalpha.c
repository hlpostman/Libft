/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 20:11:54 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 20:17:39 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the outdated Standard C Library function isalpha(3).
** Parameters: integer c that is likely in ASCII or extended ASCII range
** Side effect: none
** Return value: zero if the unsigned char cast of c is in neither the capital
** alphabet A-Z or lowercase alphabet a-z, non-zero otherwise (in this
** implementation, it will return c)
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((unsigned char)c >= 'A' && (unsigned char)c <= 'Z') ||
			((unsigned char)c >= 'a' && (unsigned char)c <= 'z'))
		return (c);
	return (0);
}
