/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 08:24:58 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 08:54:55 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function strncpy().
** Parameters: destination string, const source string, size_t number n
** Side effect: copies at most n characters from source strign to destination
** string, starting at the places pointed to by the first two arguments
** (so, the contents of bytes (source + 0) through at most (source + (n - 1))
** get copied to the bytes (destination + 0) through at most (destination +
** (n - 1)).  If the length of the source string is less than n, this copies
** all of the source string into the destination, and then proceeds to copy
** zeros into the destination until (destination + (n -1)) has been copied
** to.
** Return value: pointer to the destination string
** THIS IS A DANGEROUS FUNCTION. Because you do not necessarily copy to the
** end of the source string, you do not necessarily copy in a nul terminator.
** this is probably okay if you had a function build_monster() that called
** strncpy() on destination "caterpillar" with source "doggy" and n = 3:
** you would get a nice, nul-termianted "dogerpillar".  BUT suppose I call
** strncpy() on destination "dumb monster" with source "super mega awesome
** monster family" and n = 25 (up to "monster" in source): then I get a
** pointer to the NON-NUL-TERMINATED quasia-wanna-be string "super mega
** awesome monster" oooooh nnnoooooooo (you'll understand why it is a good
** monster if you try to pass it to ft_strlen() or anything that expects
** a legit string :( ) You have been warned...
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	ft_bzero(dst, n);
	dst = (char *)ft_memcpy(dst, src, n);
	return (dst);
}
