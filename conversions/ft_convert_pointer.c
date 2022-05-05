/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 12:33:52 by ssettle           #+#    #+#             */
/*   Updated: 2022/04/19 18:29:48 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* %p is a format specifier which is used if we want to print data of type 
**(void *)** i.e, in simple words **address of pointer or any other variable** 
The output is displayed in hexadecimal value. 
The function converts the initial hex value of the pointer to a string with
pf_itoa_p and appends "0x" in the front of the result string with pf_append
pf_putstr prints the string to stdout
Return is the length of the result string */

#include "../ft_printf.h"

int	ft_convert_pointer(va_list arg)
{
	int		len;

	len = pf_itoa_ptr(va_arg(arg, unsigned long));
	return (len);
}
