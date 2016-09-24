/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 11:47:48 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/23 12:37:10 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memcmp(3).
** Parameters: two areas of read-only memory, and a number "n" of type size_t
** Side-effect: compare up to the first n bytes of a the two memory areas, but
** with an index so there is no side-effect to the pointers passed.
** Return value: the difference between either the first byte at which the
** two sources differ, or 0 if they are the same. In comparison, byte contents
** are treated as unsigned chars.
** This function assumes that both byte strings are of length n; it doesn't
** handle cases where one is shorter and might force the computer to try to
** access non-existant or inaccessible memory, for example.
** Manual page says, "Zero-length strings are always identical", so return
** value in that case is 0; the function assumes length is indicated by the
** argument n, so if n is 0 the function skips to the return (0) statement.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*buffer1;
	const unsigned char	*buffer2;
	size_t				i;

	buffer1 = (unsigned char *)s1;
	buffer2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)buffer1[i] != (unsigned char)buffer2[i])
			return ((unsigned char)buffer1[i] - (unsigned char)buffer2[i]);
		i++;
	}
	return (0);
}
