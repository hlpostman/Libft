/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 20:30:37 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 20:42:17 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the outdated Standard C Library function isprint(3).
** Parameters: integer c, hopefully in ASCII or extended ASCII range
** Side effect: none
** Return value: 1 if the unsigned char cast of c is a printing character,
** i.e. if it is in range 32 through 126 inclusive, and 0 otherwise.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
