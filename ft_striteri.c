/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 11:52:51 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 16:07:34 by hpostman         ###   ########.fr       */
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

	if (s && f)
	{
		i = 0;
		while (*s)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}
