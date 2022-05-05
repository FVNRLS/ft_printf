/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 11:46:31 by ssettle           #+#    #+#             */
/*   Updated: 2022/04/20 18:14:03 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies the gien number (n) of chars from s2 to s1 & returns the new string */

#include "../ft_printf.h"

char	*pf_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}
