/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 12:24:09 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/25 12:45:50 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard function strmap().
** Parameters: const string, pointer to a char returning function f that takes
** in a single char.
** Side effect: creates a new string that is the result of applying f to
** each character in s
** Return value: the new string
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_s;
	size_t	i;

	new_s = ft_strdup(s);
	i = 0;
	while (new_s[i])
	{
		new_s[i] = f(new_s[i]);
		i++;
	}
	return (new_s);
}
