/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 20:49:22 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 20:57:11 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function toupper(3).
** Parameters: integer c which should be in ASCII range and representable as
** an unsigned char, or EOF
** Side effect: converts c to the corresponding upper case letter
** Return value: c - converted to upper case if it was a valid lower case
** letter, or unchanged if it was not.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
