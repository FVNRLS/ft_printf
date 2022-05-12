/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_dec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:52:13 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 18:39:52 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_count_size_dec(int n)
{	
	int	size;

	if (n == 0)
	{
		size = 1;
		return (size);
	}
	size = 0;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa_dec(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	if (nbr < 0)
		nbr *= -1;
	size = ft_count_size_dec(nbr);
	str = (malloc(sizeof(char) * (size) + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
		size--;
	while (nbr > 0)
	{
		str[size] = (nbr % 10) + '0';
		nbr /= 10;
		size--;
	}
	if (size == 0 && str[1] == '\0')
		str[0] = '0';
	return (str);
}
