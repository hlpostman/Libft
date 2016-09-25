/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 20:57:52 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 21:00:07 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function tolower(3).
** Parameters: integer c, hopefully in ASCII range and representable as
** an unsigned char or EOF
** Side effect: convert c to its lowercase equivalent
** Return value: c - changed to integer corresponding to lowercase equivalent
** if possible, or c unchanged if not.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 132)
		c = c + 32;
	return (c);
}
