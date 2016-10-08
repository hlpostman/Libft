/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 09:10:36 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 16:38:44 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard funciton itoa().
** Parameters: an integer
** Side effect: allocates memory and puts a string representing the integer
** argument in it
** Return value: a string version of the integer passed, or NULL if the memory
** allocation failed
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_num_places(n) + 1;
	if (!(s = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[len - 1] = '\0';
	while (n)
	{
		len--;
		s[len - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
