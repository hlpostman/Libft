/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchrc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 11:28:18 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/23 15:10:18 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memrchr(3).
** Same as memchr(3), but starts by looking n space out in the source memory,
** and working its way from source + (n - 1) to source + 0.
** Paramters: void pointer tos ome read-only source memory, inteter "c" that
** is probably in ASCII or extended ASCII range and will get cast to an
** unsigned char type inside the function, and a number "n" of type size_t
** Side effect: Locates the LAST occurrence of (unsigned char)c in memory
** at s + 0 through s + (n - 1)
** Return value: pointer to the first byte located with value (unsigned char)c,
** when starting from (n - 1) places out (so, the LAST byte with that value,
** really), or NULL if no byte containing (unsigned char)c exists in the first
** n bytes of the source memory.
** Note that size_t is unsigned - so while it would be nice to run the while
** loop all the way down to buffer[0], you get a warning error when comparing
** a size_t variable i like this: (i >= 0), because anything unsigned is
** always >= 0.  So in my implementation, I loop through s + (n-1) down to
** s + 1, and then do a separate check on the first byte of the source s
** before deciding c does not exist in the area and returning NULL.
*/

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*buffer;
	size_t			i;

	i = (n - 1);
	while (i > 0)
	{
		if (buffer[i] == (unsigned char)c)
			return (buffer + i);
		i--;
	}
	if (buffer[0] == (unsigned char)c)
		return ((void *)buffer);
	return (NULL);
}
