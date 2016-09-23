/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:13:17 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/22 18:10:24 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memcpy(3).
** This function takes a destination in memory, a source in memory, and a
** size_t n, and returns a void pointer to the (now modified) destination.
** Its side effect is to copy n bytes from the source to the destination.
** If the destination and any of the first n bytes of the source
** area overlap, the behavior is underfined - the function has no check
** for if there is overlap.  The manual page for memcpy(3) suggests using
** memmove(3) if the destination and source overlap.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*buffer;
	const unsigned char	*source;
	size_t			i;

	buffer = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		buffer[i] = source[i];
		i++;
	}
	return (dst);
}
