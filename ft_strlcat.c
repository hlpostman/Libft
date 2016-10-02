/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 13:18:55 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 19:29:22 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the OpenBSD function strlcat().
** Paramters: destination string; const source string; number "size" of type
** size_t that should be the sum of strlen(destination string), strlen(source
** string), and 1 (for a nul byte) - you'll get weird issues if you don't have
** this input number right.  The manual page goes out of its way to warn that
** the destination and source strings must be true "C" strings, meaning they
** must be nul terminated.
** Side effect: append source string to destination string, add a null byte
** at the end (so long as "size" was larger than the combined length of the
** two strings, leaving room for a nul byte - which it should be selected to
** be). This implementation nul terminates the result regardless, because it
** uses my ft_strcpy(), but if the result is considered to be of length at
** most "size", then the result is not nul terminated, but rather, coincid-
** entally a strip of non-nul-terminated memory followed by a nul byte.
** Return value: length of the concatenated string, as size_t type (so, should
** be buffer size, i.e. "size" argument passed in, minus 1 since nul terminator
** is not counted in a string's length) - unless the "size" argument passed
** wasn't bigger than the length of the concatenated strings (but it should
** be at least one byte larger than that), in which case "size" is returned.
*/

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

static size_t	ft_max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_min(size, ft_strlen((const char *)dst));
	src_len = ft_strlen(src);
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size - dst_len)
		ft_strncat(dst, src, src_len + 1);
	else
	{
		ft_strncat(dst, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (dst_len + src_len);
}
