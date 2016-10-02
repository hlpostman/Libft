/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 14:40:46 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/30 14:50:08 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function putchar().
** Parameters: a single character
** Side effect: writes the character passed to standard out
** Return value: none
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
