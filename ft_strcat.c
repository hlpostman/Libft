/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 09:08:17 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/26 07:04:27 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function strcat(3).
** Paramters: two nul-terminated strings, the second one a const
** Side effect: appends a copy of src to dst, starting at (overwriting) the
** nul terminator of dst, assuming dst has sufficient space to hold the
** concatenation.
** Return value: pointer to dst
** Behavior in the case of overlap between dst and src is undefined, like
** in memcpy.
*/

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t	dst_len;
	char	*end_of_dst;

	dst_len = ft_strlen(dst);
	end_of_dst = dst + (sizeof(char) * dst_len);
	dst = ft_strcpy(end_of_dst, src);
	return (dst - dst_len);
}
