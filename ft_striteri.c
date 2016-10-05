/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 11:52:51 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/04 18:18:54 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard function striteri().
** Parameters: string to modify, pointer to non-returning function f that
** takes an unsigned char and a string
** Side effect: applies f to each character in the string argument and the
** index of that character in the string
** Return value: none
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			len;

	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		while (i < (unsigned int)len)
		{
			f(i, (s + i));
			i++;
		}
	}
}
