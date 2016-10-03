/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:18:50 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/02 17:17:58 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the FreeBSD library function strnstr().
** Parameters: const string "big" (to search within), const string "little"
** (to seek in big), number of type size_t "n" that is the number of
** places into "little" that will be searched in "big". If n > strlen(little),
** nothing is searched beyond the nul terminator of little, however the nul
** terminator itself will be checked for.
** Side effect: none
** Return value: if the first n characters of little exist consecutively in
** big, a pointer to the place in big that is the front of the first place
** where this substring occurs is returned; if the first n characters of
** little do not exist consecutively in big, NULL is returned; if little
** is the empty string, a pointer to the front of big is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	checkto;
	size_t	len_little;
	size_t	i;

	checkto = ft_min(ft_strlen(big) + 1, n);
	len_little = ft_strlen(little);
	i = 0;
	if (!(unsigned char)little[0])
		return (char *)(big);
	while (i < checkto && len_little <= (n - i))
	{
		if (ft_strncmp((big + i), little, len_little) == 0)
			return (char *)(big + i);
		i++;
	}
	return (NULL);
}
