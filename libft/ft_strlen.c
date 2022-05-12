/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:03:11 by rmazurit          #+#    #+#             */
/*   Updated: 2022/03/25 19:45:16 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlen() function takes a string as an argument and returns its length. 
The returned value is of type size_t (the unsigned integer type).*/

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
