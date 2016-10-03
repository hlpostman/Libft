/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:46:13 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/02 19:47:42 by hpostman         ###   ########.fr       */
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
	int		i;
	int		j;
	int		ans;
	char	*input;

	i = 0;
	j = 1;
	ans = 0;
	input = (char *)s;
	while (IS_WHITESPACE(*input))
		input++;
	if (*input == '-' && ft_isdigit(*(input + 1)))
	{
		j = -1;
		input++;
	}
	if (*input == '+' && ft_isdigit(*(input + 1)))
		input++;
	while (ft_isdigit(*input))
	{
		ans = ans * 10 + (*input - '0');
		input++;
	}
	return (j * ans);
}
