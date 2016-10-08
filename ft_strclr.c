/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 09:39:39 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 16:03:55 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function strclr().
** Parameters: a string that needs to be cleared
** Side effect: sets every byte in the string to 0, equivalent of '\0' as per
** this site: www.quora.com/What-is-the-difference-between-0-and-null-
** terminator-in-a-C-string
** Return value: none
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	if (s)
		ft_bzero(s, (sizeof(char) * ft_strlen(s)));
}
