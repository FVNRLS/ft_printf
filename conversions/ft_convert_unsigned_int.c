/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_unsigned_int.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:43:01 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/19 18:10:09 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* takes an int as input and converts it to a str with pf_itoa 
pf_putstr prints the string to stdout
returns the length of the string */

#include "../ft_printf.h"

int	ft_convert_unsigned_int(va_list arg)
{
	char	*str;
	int		len;

	str = pf_itoa_unsigned_int(va_arg(arg, unsigned int));
	len = pf_strlen(str);
	pf_putstr(str);
	free(str);
	return (len);
}
