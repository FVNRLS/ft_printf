/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 09:55:49 by ssettle           #+#    #+#             */
/*   Updated: 2022/04/19 18:11:05 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates and returns a string representing the integer 
received as an argument. Negative numbers must be handled. 
Returns the string representing the integer. NULL if the allocation fails. */

#include "../ft_printf.h"

char	*pf_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = pf_count_size(n);
	if (nbr < 0)
		nbr *= -1;
	str = ((char *)malloc(size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
		size--;
	while (nbr > 0)
	{
		str[size] = nbr % 10 + '0';
		nbr /= 10;
		size--;
	}
	if (size == 0 && str[1] == '\0')
		str[0] = '0';
	else if (size == 0 && str[1] != '\0')
		str[0] = '-';
	return (str);
}
