/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:09:17 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 10:45:03 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_count_size_hex(unsigned long n)
{	
	int	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n /= 16;
	}
	return (size);
}

char	*ft_itoa_hex(unsigned long n, t_mod *mods)
{
	char	*str;
	char	*hex_base;
	size_t	size;
	
	if (n == 0)
	{
		str = (malloc(sizeof(char) * 2));
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (mods->spec == 'x')
		hex_base = HEX_BASE_LOWERCASE;
	else if (mods->spec == 'X')
		hex_base = HEX_BASE_UPPERCASE;
	size = ft_count_size_hex(n);
	str = (malloc(sizeof(char) * (size + 1)));
	if (!str)
		return (NULL);
	str[size] = '\0';
		size--;
	while (n > 0)
	{
		str[size] = hex_base[n % 16];
		n /= 16;
		size--;
	}
	return (str);
}