/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_delim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 21:33:07 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 21:53:39 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function counts the number of times a string is deliminated. If the
** deliminator appears contiguously, this is counted as one instance - it is
** one instance of delimination (so, don't use this function if you want to
** know exactly how many times a character appears in a string: if you want
** to use 'p' as a deliminator, that is fine, but with this function the
** string "happy" will return 1, not 2).
** Parameters: const string to search for the deliminator in, and a character
** that is your deliminator
** Side effect: none - goes through the string and checks for instances of
** the deliminator
** Return value: the number of times chunks of the deliminator appear in the
** string
*/

#include "libft.h"

size_t	ft_count_delim(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}
