/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:56:32 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/06 11:30:20 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The function void *memcpy(void *dest, const void *src, size_t n) 
copies n characters from memory area src to memory area dest.
This function returns a pointer to destination */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
