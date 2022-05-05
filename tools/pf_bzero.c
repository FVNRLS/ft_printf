/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:00:24 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/19 18:21:11 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The bzero() function erases the data in the n bytes of the memory, starting 
at the location pointed to by s, by writing zeros (bytes containing '\0') 
to that area.*/

#include "../ft_printf.h"

void	pf_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
}
