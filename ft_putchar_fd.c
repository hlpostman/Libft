/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 16:14:20 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/30 16:18:33 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function putchar_fd()
** Parameters: a character, and an integer "fd" that is a valid file descriptor
** Side effect: writes the character to the file descriptor.  Note that if the
** argument passed for the file descriptor is not valid, the program crashes.
** Return value: none
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
