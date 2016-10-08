/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 16:33:51 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 16:49:10 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function putnbr_fd().
** Parameters: integer to write out, and integer that is a valid file descriptor
** Side effect: writes the first argument to the file descriptor. Note that if
** the argument passed for the file descriptor is not valid, the write(2)
** function underneath the ft_putchar_fd() function will fail, and neither
** ft_putchar_fd() nor this ft_putnbr_fd() does any error handling.
** Return value: none
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n > 2147483647 || n < -2147483648)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n = n * -1;
		ft_putchar_fd('-', fd);
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
	return ;
}
