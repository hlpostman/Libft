/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 09:08:17 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/24 09:27:40 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function strcat(3).
** Paramters: two nul-terminated strings, the second one a const
** Side effect: appends a copy of s2 to s1, starting at (overwriting) the
** nul terminator of s1, assuming s1 has sufficient space to hold the
** concatenation.
** Return value: pointer to s1
** Behavior in the case of overlap between s1 and s2 is undefined, like
** in memcpy.
*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	s1_len;
	char	*end_of_s1;

	s1_len = ft_strlen(s1);
	end_of_s1 = s1 + (sizeof(char) * s1_len);
	s1 = ft_strcpy(end_of_s1, s2);
	return (s1);
}
