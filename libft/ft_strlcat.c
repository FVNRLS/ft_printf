/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:51:03 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/14 13:55:08 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
The strlcat() function appends the null-terminated string src to the end of 
dest (but no more than size characters will be in the destination). To help 
prevent writing outside the bounds of the array, strlcat() accepts the full 
size of the destination string (including \0 ) as a size parameter. 
dest_len + i < size - 1 --> buffer (1 byte is reserved for \0)
The func. returns the total len of the string, tried to create:
initial len of dest plus the len of src. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	if (dest_len >= dstsize)
		dest_len = dstsize;
	i = 0;
	j = dest_len;
	if (dest_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i] != '\0' && dest_len + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	return (dest_len + src_len);
}
