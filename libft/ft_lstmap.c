/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:07:21 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/14 13:13:31 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////INCOMPLETE!!!!!!//////////////////

/* Iterates the list ’lst’ and applies func ’f’ on the content of each node. 
Creates a new list resulting of the successive applications of
the function ’f’. The ’del’ function is used to delete the content of a node 
Returns The new list. NULL if the allocation fails. */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*second_list;
	t_list	*curr;

	curr = lst;
	if (curr == 0)
		return (0);
	second_list = ft_lstnew(f(curr->content));
	if (second_list == 0)
		return (0);
	start = second_list;
	curr = curr->next;
	while (curr != 0)
	{
		second_list->next = ft_lstnew(f(curr->content));
		if (second_list->next == 0)
		{
			ft_lstclear(&start, del);
			return (0);
		}
		second_list = second_list->next;
		curr = curr->next;
	}
	return (start);
}
