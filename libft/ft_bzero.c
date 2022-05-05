/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:30:10 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/28 14:10:27 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The bzero() function erases the data in the n bytes of the memory, starting 
at the location pointed to by s, by writing zeros (bytes containing '\0') 
to that area.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = (char *)s;
	if (!s1)
		return ;
	i = 0;
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
}
