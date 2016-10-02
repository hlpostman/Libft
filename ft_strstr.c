/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:54:41 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/02 11:09:26 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Stanard C Library function strstr(3).
** Parameters: const string, and a (probably smaller) const string
** Side effect: none
** Return value: if little is an empty string, a pointer to big is returned;
** if little occurs nowhere in big, NULL is returned; otherwise apointer to the
** first chracter of the first occurence of little is returned
*/

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	len_big;

	i = 0;
	len_big = ft_strlen(big);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (i < len_big)
	{
		if (ft_memcmp((big + i), little, ft_strlen(little)) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
