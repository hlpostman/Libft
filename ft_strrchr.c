/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:40:26 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 14:50:26 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function strrchr().
** Parameters: const string "s", integer "c" that should be in ASCII or extended
** ASCII range, i.e. a byte.
** Side effect: none
** Return value: pointer to the LAST place in the memory area holding string
** "s" and its nul terminator  where "c" occurs, or NULL if the character "c"
** never occurs in that area.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	search_area;

	search_area = ft_strlen(s) + 1;
	return ((char *)ft_memrchr(s, c, search_area));
}
