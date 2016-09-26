/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 07:29:48 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/26 06:20:26 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function strdup(3).
** Paramters: const string
** Side effects: allocates the right amount of memory for a copy of the
** argument string to be made, and copies the argument string into that memory
** Return value: a pointer to the front of the new memory block holding
** the copy of the argument string, OR, if not enough memory was available
** and the memory allocation failed, NULL.
** Much like strcpy(3), but allocates memory for the result, whereas with
** strcpy(3), the memory area for the result is passed as the first argument.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_duplicate;
	size_t	len;

	len = ft_strlen(s);
	s_duplicate = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (s_duplicate == NULL)
		return (NULL);
	s_duplicate = (char *)ft_memcpy(s_duplicate, s, len);
	return (s_duplicate);
}
