/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:14:10 by hpostman          #+#    #+#             */
/*   Updated: 2016/09/23 12:19:35 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Non-standard function allocates memory using malloc(3) and initliazes all
** bytes to 0.  Returns a pointer to the first byte, or NULL if malloc failed.
** Parameter size_t size indicates how much memory to allocate.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*buffer;

	buffer = (void *)malloc(size);
	if (buffer)
	{
		ft_bzero(buffer, size);
		return (buffer);
	}
	return (NULL);
}
