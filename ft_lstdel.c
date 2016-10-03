/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 17:53:00 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/02 20:28:44 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstdel().
** Parameters: pointer to the head pointer of a t_list, pointer to a deletion
** function that takes a void * and size_t and returns nothing
** Side effect: if the parameters are not null, frees the content and the
** content_size attributes of each node in the string list, and the pointer
** to each node, and then sets the head pointer to NULL.
** Return value: none
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*next;

	if (alst && del)
	{
		current = *alst;
		while (current)
		{
			next = current->next;
			del(current->content, current->content_size);
			free(current);
			current = current->next;
		}
		*alst = NULL;
	}
}
