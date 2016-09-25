/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:46:13 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 20:10:36 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function atoi(3).
** Parameters: const string
** Side effect: none
** Return value: integer that was represented by the string passed
*/

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	j;
	int	ans;

	i = 0;
	j = 0;
	ans = 0;
	while (IS_WHITESPACE(s[i]) && s[i] != '\0')
		i++;
	if (s[i] == '-' && ft_isdigit(s[i + 1]))
	{
		j = -1;
		i++;
	}
	if (s[i] == '+' && ft_isdigit(s[i + 1]))
		i++;
	while (s[i] != '\0')
	{
		if (ft_isdigit(s[i]))
			ans = ans * 10 + (s[i] - '0');
		else
			return (j * ans);
		i++;
	}
	return (j * ans);
}
