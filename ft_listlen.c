/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpostman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 19:15:51 by hpostman          #+#    #+#             */
/*   Updated: 2016/10/01 19:23:15 by hpostman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom function I added listlen().
** Parameters: pointer to the head node of a list
** Side effect: creates a variable len
** Return value: size_t indicating the length, if the pointer was non-NULL
*/

#include "libft.h"

size_t	ft_listlen(t_list *lst)
{

	size_t	len;

	len = 0;
	if (lst)
		while (lst->next)
		{
			lst = lst->next;
			len++;
		}
	return (len);
}
