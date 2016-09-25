/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 20:18:25 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 20:22:21 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the outdated Standard C Library function isalnum(3).
** Parameters: integer c, likely in ASCII or extended ASCII range
** Side effect: none
** Return value: 0 if the unsigned char cast of c is neither an upper- or
** lower-case letter nor digit, or if it is, then c itself is returned
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	return (0);
}
