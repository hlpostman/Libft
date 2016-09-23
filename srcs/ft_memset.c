/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:15:13 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/22 18:14:25 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memset(3).
** This function takes a void pointer to some memory, an integer c, and size_t
** variable n that shows the number of bytes starting at the byte pointed to
** by the first argument, that should be filled with the unsigned char cast
** of the integer c.  Note this overwrites whatever may be in the byte before.
** The function returns a void pointer to the first byte in memory written to.
** The only "tricky" thing is that the parameter c is basically not an int
** for the purposes of the function, though it must be when passed in; it gets
** immediately typecase to an unsigned char.  See github wiki for the libft
** project for more info.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*buffer;
	size_t			i;

	buffer = b;
	i = 0;
	while (i < n)
	{
		buffer[i] = (unsigned char)c;
		i++;
	}
	return (buffer);
}
