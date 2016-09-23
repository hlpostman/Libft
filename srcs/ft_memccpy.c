/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 18:17:24 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/22 19:30:19 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the C Standard Library function memccpy(3).
** This function takes a pointer to some destination area of memory dst, a
** pointer to some read-only source memory, an int c, and a size_t n.
** Note, like in ft_memset(3), the "int c" is similarly misleading - the
** argument c is an integer in ASCII or extended ASCII range, and will
** be immediately typecast to an unsigned char.
** Side-effect: copies up to n bytes from the source memory to the destination
** memory, stopping either after n bytes have been copied, or when the
** character (unsigned char)c is first encountered in the source, whichever
** comes first.
** Return value: If n bytes are copied, a NULL pointer is returned. Otherwise,
** a pointer to the byte AFTER the copy of (unsigned char)c in the destination
** is returned.
** Like with ft_memcpy(3), if the source and destination overlap, the behavior
** is undefined.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*buffer;
	const unsigned char	*source;
	size_t				i;
	void				*ptr;

	buffer = (unsigned char *)dst;
	source = (const unsigned char *)src;
	i = 0;
	ptr = NULL;
	while (i < n)
	{
		buffer[i] = source[i];
		if (source[i] == (unsigned char)c)
			return ((void *)(buffer + i + 1));
		i++;
	}
	return (ptr);
}
