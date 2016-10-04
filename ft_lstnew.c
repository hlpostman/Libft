/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 12:28:30 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/03 20:43:27 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function lstnew().
** Parameters: const contnent of any type (void *) to be the data or content
** held in the list node to be created, and a size_t number that should be the
** sizeof() the first argument.
** Side effect: creates a new node in a linked list, with node->next set to
** NULL.  If the content argument passed is nul, then node-content_size is set
** to 0, even if something else was passed as the content_size argument.
** Return value: pointer to the t_list node created, or NULL if the memroy
** allocation fails.
*/

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	if (!content)
	{
		new_node->content = (void *)content;
		new_node->content_size = 0;
	}
	else
	{
		new_node->content = (void *)malloc(content_size);
		if (!new_node->content)
			return (NULL);
		ft_memcpy(new_node->content, content, content_size);
		new_node->content_size = content_size;
	}
	new_node->next = NULL;
	return (new_node);
}
