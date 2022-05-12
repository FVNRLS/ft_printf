/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:06:40 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/02 12:37:17 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function memset copies a defined character to the first n characters of the 
string pointed to. This function returns a pointer to the memory area str. */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
