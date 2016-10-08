/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 15:28:22 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 16:41:15 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function putendl().
** Parameters: const string
** Side effect: writes the string argument to standard out, followed by a
** newline
** Return value: none
** If s is NULL, ft_putstr will do nothing (see ft_putstr which checks for if
** the pointer passed to it is nul), but ft_putchar() will put the newline.
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}
