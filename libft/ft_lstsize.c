/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:15:19 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/03 19:18:14 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* is the number of nodes in a list. lst: The beginning of the list.
in the end add 1 to the size because of last element next=NULL
The length of the list */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
