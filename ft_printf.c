/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:42:55 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/02 11:39:01 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_printf is the core function, which  goes through all arguments and
applies the ft_check_write on them.
returns the amount of bytes read (length of the whole printed string)
ft_check_write duplicates the input of printf and applies the particular 
conversions for each argument. The indicator to start convertsion is the %sign
Return value: total printed string length.
free(input_str) protects the function against leaks;*/

#include "./ft_printf.h"

int	ft_check_write(const char *format, va_list arg)
{	
	int		i;
	int		j;
	int		ret;

	i = 0;
	j = 0;
	ret = 0;
	while (format[i] != '\0')
	{
		while (format[i] == '%')
		{	
			i++;
			ret += ft_apply_conversions(format, arg, i);
			i++;
		}
		while (format[i] != '\0' && format[i] != '%')
		{
			write(1, &format[i], 1);
			i++;
			j++;
		}
	}
	return (ret + j);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		len;

	va_start(arg, format);
	len = ft_check_write(format, arg);
	va_end(arg);
	return (len);
}
