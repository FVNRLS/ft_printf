/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:04 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/10 18:51:13 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(t_input *input, t_mod *mods)
{
	mods->spec = input->format[input->pos]; //format specifier is the input on the current pos
	if (mods->spec == 'c' || mods->spec == '%')
		ft_printchar(input, mods);
	else if (mods->spec == 's')
		ft_printstr(input, mods);
	// else if (mods->spec == 'i' || mods->spec == 'd')
	// 	ft_printint(input, mods);
	// else if (mods->spec == 'u' || mods->spec == 'x'
	// 	|| mods->spec == 'X')
	// 	ft_printnbr(input, mods, (unsigned long int) va_arg(input->arg, unsigned int));
	// else
	// 	ft_printnbr(input, mods, va_arg(input->arg, unsigned long int));
}
