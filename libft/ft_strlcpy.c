/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:32:17 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/14 13:55:41 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* In computer programming, the strlcpy function is intended to replace the 
function strcpy (which copies a string to a destination buffer) with a secure 
version that cannot overflow the destination buffer.
strlcpy returns the length of the string whether or not it was possible to copy 
it all -- this makes it easier to calculate the required buffer size. If dest 
and src are overlapping buffers, the behavior is undefined.
The last index of the dest will be guaranteed the '\0'
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
