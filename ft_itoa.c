/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 09:10:36 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/05 21:31:37 by hpostman         ###   ########.fr       */
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
	char	*result;
	int		num_places;
	int		sign;

	num_places = ft_num_places(n);
	sign = 0;
	if (n < 0)
		sign = 1;
	if (!(result = (char *)ft_memalloc(num_places + sign + 1)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (sign)
	{
		result[0] = '-';
		n = -n;
	}
	result[num_places + sign] = '\0';
	while (num_places)
	{
		num_places--;
		result[num_places + sign] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
