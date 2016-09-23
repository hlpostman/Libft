/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 09:56:44 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/23 10:56:53 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memmove(3).
** This function takes a void pointer to some destination memory, a void
** pointer to some read-only source memory, and a number "len" of type size_t.
** Side-effect: copies len bytes from the source memory (so source + 0 through
** source + (len - 1)) to the destination.
** Return value: pointer to the front of destination.
** The manual page says "The two strings may overlap; th copy is always done
** in a non-destructive manner" - I'm not sure what that means.  I guess that
** if the destination memory is somewhere in 1 - (len - 1) of the source bytes,
** the function makes sure to remember what was there in source so that it can
** remember what it needs to copy later on when that space has been overwrriten
** in the destination?  but that doesn't really make sense because the source
** memory is specified as read-only anyway. But it seems like this is how others
** have interpreted it...hm... Doing it that way for now.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_buffer;

	temp_buffer = (unsigned char *)malloc(len);
	ft_memcpy(temp_buffer, src, len);
	ft_memcpy(dst, temp_buffer, len);
	return (dst);
}

