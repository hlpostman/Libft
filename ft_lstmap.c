/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 19:47:33 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 20:45:03 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstmap().
** Parameters: pointer to the head node of a list, pointer to a function that
** takes a list node and returns a pointer to a list node
** Side effect: if the arguments passed are non-NULL, creates a new list
** that is the list where each element is the result of applying f to
** the corresponding node of the list passed
** Return value: pointer to the head of the new list, or NULL if the memory
** allocation failed or a NULL argument was passed
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*result;
	t_list		*head;
	size_t		len;
	size_t		i;
	t_list		*elem;

	if (!lst || !f)
		return (NULL);
	len = ft_listlen(lst);
	result = (t_list *)malloc(len);
	head = result;
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		elem = f(lst->content);
		if (!(result = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
		result = result->next;
		lst = lst->next;
	}
	return (head);
}
