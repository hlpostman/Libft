/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 19:47:33 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 12:02:18 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstmap().
** Parameters:
** Side effect:
** Return value:
*/

#include "libft.h"

size_t	ft_listlen(t_list *lst)
{
	size_t	len;

	len = 0;
	while (lst->next)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

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
