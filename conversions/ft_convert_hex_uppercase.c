/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:23:54 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/19 18:43:43 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* takes an int as input, convert it to unsigned int and converts it to a str 
with pf_calculate_hex pf_putstr_hex converts the string to uppercase and 
prints the string to stdout.
returns the length of the string */

#include "../ft_printf.h"

int	ft_convert_hex_uppercase(va_list arg)
{
	char	*str;
	int		len;
	int		uppercase;

	uppercase = 1;
	str = pf_calculate_hex(va_arg(arg, unsigned int));
	len = pf_strlen(str);
	pf_putstr_hex(str, uppercase);
	free(str);
	return (len);
}
