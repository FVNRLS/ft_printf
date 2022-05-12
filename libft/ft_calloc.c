/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:00:31 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/02 19:16:20 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The C library function void *calloc(size_t nitems, size_t size) allocates 
the requested memory and returns a pointer to it. The difference in malloc and 
calloc is that malloc does not set the memory to zero where as calloc sets 
allocated memory to zero.
This function returns a pointer to the allocated memory, or NULL if the request
fails. */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	total = size * count;
	ptr = malloc(total);
	if (!ptr)
		return (0);
	ft_bzero(ptr, total);
	return (ptr);
}
