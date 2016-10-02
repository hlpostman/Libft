/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 19:32:18 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 19:34:45 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom function I added.
** Parameters: two size_t numbers
** Side effect: none (compares the two unsigned numbers)
** Return value: the value of whichever argument is smaller, or either if they
** are equal
*/

#include "libft.h"

size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
