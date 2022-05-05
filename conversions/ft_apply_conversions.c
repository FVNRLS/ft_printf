/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_conversions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:29:03 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/19 18:42:23 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/* cheks if the string on current position (after % sign) is one of the format
specifiers. If yes --> applies one of the conversion functions! 
ret returns the length of the printed ouput */

int	ft_apply_conversions(const char *format, va_list arg, int pos)
{	
	int	ret;

	ret = 0;
	if (format[pos] == 'c')
		ret = ft_convert_char(arg);
	if (format[pos] == 's')
		ret = ft_convert_str(arg);
	if (format[pos] == 'p')
		ret = ft_convert_pointer(arg);
	if (format[pos] == 'd' || format[pos] == 'i')
		ret = ft_convert_decimal(arg);
	if (format[pos] == 'u')
		ret = ft_convert_unsigned_int(arg);
	if (format[pos] == 'x')
		ret = ft_convert_hex_lowercase(arg);
	if (format[pos] == 'X')
		ret = ft_convert_hex_uppercase(arg);
	if (format[pos] == '%')
		ret = ft_convert_percent();
	return (ret);
}
