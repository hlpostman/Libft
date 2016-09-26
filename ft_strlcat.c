/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 13:18:55 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/26 13:02:22 by hpostman         ###   ########.fr       */
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

size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

size_t	ft_max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*result;
	size_t	append_len;
	size_t	length_attempted;

//	length_attempted = ft_strlen((const char *)dst) + ft_strlen(src)1;
	length_attempted = ft_strlen(src) + ft_min(ft_strlen((const char *)dst), size);
	append_len = ft_max(size - ft_strlen((const char *)dst) - 1, ft_strlen(src));
	if (size >= length_attempted)
//	if (size - ft_strlen(dst) - 1 > 0)
	{
		result = ft_strncat(dst, src, append_len);
		length_attempted = ft_strlen(result);
	}
		return (length_attempted);
}
