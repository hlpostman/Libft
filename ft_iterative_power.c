/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 22:18:54 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/03 22:25:45 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the commong pow() function. Iterative implementation. For unsigned
** input only.
** Parameters: size_t base, and size_t exponent
** Side effect: none (calculates the base to the exponent, saves it a variable)
** Return value: base argument raised to the exponent argument
*/

#include "libft.h"

size_t	ft_iterative_power(size_t base, size_t exponent)
{
	size_t	total;

	total = 1;
	while (exponent > 0)
	{
		total *= base;
		exponent--;
	}
	return (total);
}
