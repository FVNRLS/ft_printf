/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:34:08 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/25 19:49:57 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The strnstr() function locates the	first occurrence of the	null-termi-
    nated string needle in the string haystack, where not more than
	len characters are searched.  
	If needle is an empty string, haystack is returned;if needle occurs nowhere
	in haystack, NULL is returned; otherwise a pointer to the first character
	of the first occurrence of needle is returned. */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle || !needle[0])
		return ((char *)(haystack));
	if (!haystack)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && needle[j] != '\0'
			&& i + j < len && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
