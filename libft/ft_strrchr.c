/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:36:31 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/14 14:00:58 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The C library function char *strrchr(const char *str, int c) searches for 
the last occurrence of the character c (an unsigned char) in the string pointed 
to, by the argument str.
This function returns a pointer to the last occurrence of character in str. 
If the value is not found, the function returns a null pointer.
*/

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
