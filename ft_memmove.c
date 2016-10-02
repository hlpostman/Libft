/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 09:56:44 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/02 09:28:50 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memmove(3).
** This function takes a void pointer to some destination memory, a void
** pointer to some read-only source memory, and a number "n" of type size_t.
** Side-effect: copies n bytes from the source memory (so source + 0 through
** source + (n - 1)) to the destination.
** Return value: pointer to the front of destination (or NULL if copy failed).
** The manual page says "The two strings may overlap; th copy is always done
** in a non-destructive manner" - since src is const, any overlap with dst
** will only get modified indirectly, with the dst pointer, not directly
** with the src pointer.
** Note that this implementation is more secure than those that use a temp
** buffer: we are sure to do the copy regardless of whether or not there
** is additional memory available.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*buffer;
	const unsigned char	*source;

	buffer = dst;
	source = src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	return (ft_memrcpy(dst, src, len));
}