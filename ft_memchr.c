/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 11:09:19 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 06:33:28 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memchr(3).
** Parameters: void pointer to some read-only source memory, integer "c" that
** is probably in ASCII or extended ASCII range and will get cast to an
** unsigned char type inside the function, and a number "n" of type size_t
** Side effect: Locates the first occurrence of (unsigned char)c in memory
** at s + 0 through s + (n - 1)
** Return value: pointer to the bytelocated, or NULL if no byte containing
** (unsigned char)c exists in the first n bytes of the source.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buffer;
	size_t			i;

	buffer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buffer[i] == (unsigned char)c)
			return ((void *)(buffer + i));
		i++;
	}
	return (NULL);
}
