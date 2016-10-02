/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:28:36 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 18:50:01 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstiter().
** Parameters: pointer to the head of a list, non-returning function f that
** takes a t_list element
** Side effect: if the pointer arguments are valid (non-null), then this
** applies f to each node in the list. Note, it sets current to the head of
** list before entering the loop to start off. In the loop, we make sure we
** hold onto the current->next value before applying f, in case f is a deletion
** function; then we apply f to current, then we let current be the value we
** held onto before applying f, and continue in the loop.  Since the loop
** will stop when a node has node->next = NULL, f does not act on the last
** node of the list within the loop.  This is why I have a line after the end
** of the loop applying f to that last node.
** Return value: none
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*current;
	t_list	*next;

	if (lst && f)
	{
		current = lst;
		while (current->next)
		{
			next = current->next;
			f(current);
			current = next;
		}
		f(current);
	}
}
