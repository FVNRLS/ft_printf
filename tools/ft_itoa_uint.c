/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_uint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:49:34 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 11:53:54 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_count_size_uint(unsigned int n)
{	
	int	size;

	size = 0;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa_uint(unsigned int nbr)
{
	char	*str;
	size_t	size;

	if (nbr == 0)
	{
		str = (malloc(sizeof(char) * 2));
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	size = ft_count_size_uint(nbr);
	str = (malloc(sizeof(char) * (size + 1)));
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
	return (str);
}