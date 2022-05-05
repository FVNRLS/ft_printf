/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:56:02 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/14 13:37:26 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The function int strncmp(const char *str1, const char *str2, size_t n) 
compares at most the first n bytes of str1 and str2.
This function return values that are as follows −
1) if Return value < 0 then it indicates str1 is less than str2.
2) if Return value > 0 then it indicates str2 is less than str1.
3) if Return value = 0 then it indicates str1 is equal to str2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (((*str1 != '\0') || (*str2 != '\0')) && (i < n))
	{
		if (*str1 < *str2)
			return (-1);
		else if (*str1 > *str2)
			return (1);
		str1++;
		str2++;
		i++;
	}
	return (0);
}
