/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:27:38 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 14:37:48 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function strchr(3).
** Paramters: const string, integer "c" that is in ASCII or extended ASCII
** range, i.e. a byte
** Side effect: none
** Result: pointer to the first occurrence of "c" in the memory area holding
** s and the nul terminator of s - so if '\0' is c, a pointer to the nul byte
** of s will be returned.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	search_area;

	search_area = ft_strlen(s) + 1;
	return ((char *)ft_memchr(s, c, search_area));
}
