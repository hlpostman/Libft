/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 08:02:24 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 08:14:04 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function strcpy(3).
** Paramaters: destination string and const source string
** Side effect: copies the source string into the destination string, including
** the null terminator of the source string
** Return value: pointer to the front of the destination string
** Much like strdup(3), but requires that the memory area that the source
** will be copied to be passed as an argument, whereas strdup(3) only requires
** that the source string be passed, and then allocates  memory accordingly.
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	source_len;
	char	*result;

	source_len = ft_strlen(src) + 1;
	result = (char *)ft_memcpy(dst, src, source_len);
	return (result);
}
