/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:16:28 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/30 22:14:04 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the node ’new’ at the beginning of the list. 
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list.
If there is no link lst to the list, then create one!
new->next = *lst adds the 'new' node as the new element
No return value */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
