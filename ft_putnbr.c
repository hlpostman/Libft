/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 15:32:00 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/30 16:08:18 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function putnbr().
** Parameters: an integer
** Side effect: prints the number put in to standard out using only write(2) as
** a standard helper function
** Return value: none
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr(n / 10);
		ft_putchar(('0' + 8));
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		if (n < 10)
			ft_putchar('0' + n);
	}
}
