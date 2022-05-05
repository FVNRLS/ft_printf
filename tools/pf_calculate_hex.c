/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_calculate_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:03:58 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/20 18:04:00 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* converts the given input into a 8 byte long hex value as a string.
Returns the string. */

#include "../ft_printf.h"

int	pf_calc_hex_len(uint64_t input)
{	
	int	len;

	len = 0;
	while (input != 0)
	{
		len++;
		input /= 16;
	}
	return (len);
}

char	*pf_calculate_hex(uint64_t input)
{
	int			len;
	char		*res;
	static char	hex_base[16] = "0123456789abcdef";

	if (input == 0)
		return (pf_strdup("0"));
	len = pf_calc_hex_len(input);
	res = pf_strnew(len);
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len != 0)
	{
		len--;
		res[len] = hex_base[input % 16];
		input /= 16;
	}
	return (res);
}
