/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:12:42 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/03 18:38:35 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstadd().
** Parameters: address of a pointer to the first link in the list, new node to
** add
** Side effect: sets the node argument as the head node of the list, if the
** arguments were valid (non-null)
** Return value: none
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new_node)
{
	if (alst && new_node)
	{
		new_node->next = *alst;
		*alst = new_node;
	}
}
