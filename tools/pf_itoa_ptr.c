/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_itoa_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:00:38 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/20 18:10:48 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* converts the initial hex value of the pointer to a string based on hex_base.
pf_strnew allocates memory for the result string'
pf_get_nbr counts the total number of digits (length of the result string) of
the input (particular variadic argument from va_list)
Returns value is the converted string */

#include "../ft_printf.h"

unsigned long	pf_count_hex_size(unsigned long input)
{	
	unsigned long	len;

	len = 0;
	while (input != 0)
	{
		len++;
		input /= 16;
	}
	return (len);
}

unsigned long	pf_itoa_ptr(unsigned long input)
{
	unsigned long	len;
	unsigned long	size;
	char			*res;
	static char		hex_base[16] = "0123456789abcdef";

	if (input == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	len = pf_count_hex_size(input);
	size = len + 2;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	while (len--)
	{
		res[len] = hex_base[input % 16];
		input /= 16;
	}
	pf_putstr(res);
	free(res);
	return (size);
}
