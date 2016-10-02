/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 19:32:18 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 19:40:20 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom function I added.
** Parameters: two size_t numbers
** Side effect: none (compares the two unsigned numbers)
** Return value: the smaller of a and b, b if they are equal
*/

#include "libft.h"

size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
