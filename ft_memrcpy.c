/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 20:58:56 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 21:14:06 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This is a custom function I wrote to copy memory BACKWARDS from the source
** to the destination.  It will be useful in functions like memmove().
** Parameters: void pointer to destination memory, const void pointer source
** memory to copy to the destination, and size_t number showing how many
** bytes of the source to copy to the destination
** Side effect: copies at most the LAST n bytes from the source memory area
** to the LAST n bytes of the destination areay - this may mean that all
** of the source is copied to the destination and reaches the front of the
** destination, but it is not a guaruntee of this; just note that the copying
** of source bytes to the destination is done from (n - 1) places out in
** source to the head of source, rather than from the head to (n - 1) places
** out. The bytes are copied into the corresponding index of the destination,
** so the string is not reversed.  This all happens if and only if the
** pointers passed as arguments are non-null.
** Return value: pointer to the front of the destination
*/

#include "libft.h"

void	*ft_memrcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*buffer;
	const unsigned char	*source;
	size_t				i;

	buffer = dst;
	source = src;
	i = (n - 1);
	if (dst && src)
	{
		while (i > 0)
		{
			buffer[i] = source[i];
			i--;
		}
		buffer[0] = source[0];
	}
	return (dst);
}
