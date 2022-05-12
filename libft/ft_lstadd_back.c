/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:56:20 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/31 11:32:13 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds _new_element to the end of the list, or init it if list is NULL.
lst: The address of a pointer to a list.
new: The address of a pointer to add to the list.
no return value	*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
