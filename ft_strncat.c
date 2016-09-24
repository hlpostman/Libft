/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 09:44:25 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 10:07:44 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function strncat().
** Paramters: destination string, const source string, number size_t n
** Side effect: appends up to the nth character of the source string to the
** destination string, and nul terminates after this.
** Return value: pointer to the destination string
** Unlike with strncpy(), the manual page for strncat() is not explicit about
** what the behavior is if the source string is shorter than n characters.
*/

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	dst_len;
	char	*end_of_dst;

	dst_len = ft_strlen(dst);
	end_of_dst = dst + (sizeof(char) * dst_len);
	dst = (char *)ft_memcpy(dst, src, n + 1);
	return (dst);
}
