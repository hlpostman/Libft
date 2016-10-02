/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_places.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 20:02:06 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 20:05:07 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom function I added.
** Parameters: integer number
** Side effect: none
** Return value: integer representing the number of places in the argument
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
