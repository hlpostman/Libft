/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 13:02:19 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 17:47:35 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstdelone().
** Parameters: pointer to a link in a t_list, pointer to a deletion function
** that takes a void * and size_t, and returns nothing
** Side effect: if the arguments passed are not NULL, deletes the node
** pointed to (frees its content, and then frees the pointer of the node), and
** sets the pointer of the node to NULL.
** Return value: none
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
