/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 14:55:42 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 19:05:47 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function putstr().
** Parameters: const string
** Side effect: writes each character in the argument string to standard out,
** consecutively in the order they appear in the string (so, writes the
** string passed to the function to standard out), if the string passed is
** valid (not a pointer set to NULL).
** Return value: none
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	i;

	i = 0;
	if (s)
		while (s[i] != '\0')
			ft_putchar(s[i++]);
}
