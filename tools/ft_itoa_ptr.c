/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:53:11 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 13:25:15 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"


char	*ft_itoa_ptr(unsigned long n)
{
	char	*str;
	size_t	size;

	size = ft_count_size_hex(n);
	if (n == 0)
	{
		str = (malloc(sizeof(char) * 2));
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	else
		str = (malloc(sizeof(char) * (size + 1)));
	if (!str)
		return (NULL);
	str[size] = '\0';
		size--;
	while (n > 0)
	{
		str[size] = HEX_BASE_LOWERCASE[n % 16];
		n /= 16;
		size--;
	}
	return (str);
}