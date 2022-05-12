/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:04 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 11:36:27 by rmazurit         ###   ########.fr       */
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
	else if (mods->spec == 'i' || mods->spec == 'd')
	 	ft_printint(input, mods);
	else if (mods->spec == 'p')
		ft_printptr(input, mods);
	else if (mods->spec == 'x' || mods->spec == 'X')
		ft_printhex(input, mods);
	else if (mods->spec == 'u')
		ft_print_uint(input, mods);
}
