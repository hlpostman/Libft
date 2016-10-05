/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 16:44:57 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/04 18:34:02 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function putendl_fd().
** Parameters: const string, integer that is a valid file descriptor
** Side effect: writes the sring and then a newline to the file descriptor.
** Note that if the argument passed for the file descriptor is invalid, the
** program crashes - write(2) fails, and putendl_fd() has no error handling.
** Return value: none
** If s is nul, ft_putstr_fd() will do nothing (see implementation of the
** ft_putstr_fd() function, which checks for if the pointer passed to it is
** nul), and ft_putchar_fd() will go ahead and put the newline.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
