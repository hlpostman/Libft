/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 07:39:49 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/25 09:24:20 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function strnew().
** Parameters: size_t type number indicating desired length of the new string
** Side effect: allocates memory for a new string of length "size" and fills
** each byte including the nul byte with '\0'
** Return value: pointer to the front of the string allocated if allocation
** was successful, NULL otherwise
** ft_memalloc() uses ft_bzero, so it fills with zeros, the ASCII code for '\0'
** As per this Quora answer, "a literal or integer 0 is always safe to use as
** a terminator for a C string." https://www.quora.com/What-is-the-difference-
** between-0-and-null-terminator-in-a-C-string Accessed 9/25/16
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size));
}
