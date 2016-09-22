/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:22:46 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/22 15:56:15 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the depricated, formerly Standard C Library function bzero().
** This file defines the non-returning function bzero() that takes a void
** pointer s, and a size_t argument n, and writes '0' into memory bytes starting
** at the byte pointed to by s and continuing through bytes s + (n - 1).  This
** function does not return anything.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != (size_t)0)
	{
		unsigned char	*buffer;
		while (n)
		{
			*buffer = 0;
			buffer++;
			n--;
		}
	}
}
