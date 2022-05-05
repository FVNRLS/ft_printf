/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_decimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:28:57 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/19 18:43:02 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* takes an int as input and converts it to a str with pf_itoa 
pf_putstr prints the string to stdout
returns the length of the string */

#include "../ft_printf.h"

int	ft_convert_decimal(va_list arg)
{
	char	*str;
	int		len;

	str = pf_itoa(va_arg(arg, int));
	len = pf_strlen(str);
	pf_putstr(str);
	free(str);
	return (len);
}
