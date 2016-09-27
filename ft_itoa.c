/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 09:10:36 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/27 10:32:16 by hpostman         ###   ########.fr       */
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

int		ft_num_places(int num)
{
	int	places;

	if (num == -2147483648)
		return (11);
	places = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = -num;
		return (ft_num_places(num));
	}
	while (num)
	{
		num /= 10;
		places++;
	}
	return (places);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		num_places;
	int		sign;

	num_places = ft_num_places(n);
	sign = 0;
	if (n < 0)
		sign = 1;
	result = (char *)ft_memalloc(num_places + sign + 1);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		result[0] = '0';
	if (sign)
		result[0] = '-';
	result[num_places] = '\0';
	while (n)
	{
		num_places--;
		result[num_places] = (n % 10) + '0';
		n /= 10;
	}
	return (result);

}