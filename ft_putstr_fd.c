/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 16:21:50 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 16:50:36 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function putstr_fd()l
** Parameters: const string, integer that is a valid file descriptor
** Side effect: writes the string passed as an argument to the file descriptor.
** Note that if the argument passed for the file descriptor is invalid, the
** program crashes - write(2) fails, and this function has no error handling.
** Return value: none
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
	}
}
