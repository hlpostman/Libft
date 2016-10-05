/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 09:29:40 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/04 18:14:17 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function strdel().
** Parameters: address of a string that needs to be freed and have its pointer
** set to NULL
** Side effect: frees the address pointed to and sets that address to NULL
** Return value: none
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as)
		ft_memdel((void *)as);
}
