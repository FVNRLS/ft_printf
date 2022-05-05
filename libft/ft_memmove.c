/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:52:54 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/02 19:00:09 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The C library function void *memmove(void *str1, const void *str2, size_t n) 
copies n characters from str2 to str1, but for overlapping memory blocks, 
memmove() is a safer approach than memcpy().
memmove allows to overlap on same memory.
This function returns a pointer to the destination, which is str1. */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
