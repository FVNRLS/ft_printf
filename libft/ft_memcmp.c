/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:07:32 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/02 18:40:13 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The function int memcmp(const void *str1, const void *str2, size_t n)) 
compares the first n bytes of memory area str1 and memory area str2.
1) if Return value < 0 then it indicates str1 is less than str2.
2) if Return value > 0 then it indicates str2 is less than str1.
3) if Return value = 0 then it indicates str1 is equal to str2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((*(char *)(s1 + i)) != (*(char *)(s2 + i)))
			return ((*(unsigned char *)(s1 + i)) -
			(*(unsigned char *)(s2 + i)));
		i++;
	}
	return (0);
}
