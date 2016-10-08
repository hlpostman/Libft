/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 12:46:38 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/08 15:41:21 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard function strmapi().
** Parameters: string s, pointer to a char returning function f that takes
** an unsigned int and a char
** Side effect: creates a new string that is the result of applying f to each
** index of s and the character there
** Return value: the new string
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_s = ft_strnew(len);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (new_s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	return (new_s);
}
