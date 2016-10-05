/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:20:23 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/04 18:13:56 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Non-standard function memdel.  Takes the address of a memory area that needs
** to be freed, uses free(3) to free that area, AND points the pointer taken
** in as an argument to NULL. Does not return anything.
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
