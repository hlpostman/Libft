/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 12:24:09 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 16:13:06 by hpostman         ###   ########.fr       */
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
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new_s = ft_strnew(len);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_s[i] = f(s[i]);
		i++;
	}
	return (new_s);
}
