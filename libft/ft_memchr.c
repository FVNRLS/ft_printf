/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:38:19 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/02 18:11:38 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The function void *memchr(const void *str, int c, size_t n) searches for 
the first occurrence of the character c (an unsigned char) in the first n bytes
of the string pointed to, by the argument str.
This function returns a pointer to the matching byte or NULL if the character 
does not occur in the given memory area. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
