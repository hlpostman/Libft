/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 09:47:28 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/04 18:16:54 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function striter().
** Parameters: string to be passed to the function f, pointer to non-returning
** function f that takes a string
** Side effect: applies f to s at each letter, so at len(s) substrings of s
** where each substring starts i places from the head of s, and ends at the end
** of s.  Coded in such a way that there is no side effect on the pointer taken
** in for s - i.e. I don't use "s++" but rather "s + i", where i is a new
** variable.  That way after calling ft_striter, a program can still expect
** s to point to the head of s rather than the tail.
** ** sounds like since s is a copy when it's passed, "s++" might not modify
** s anyway**
** Return value: none
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;
	size_t	len;

	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			f((s + i));
			i++;
		}
	}
}
