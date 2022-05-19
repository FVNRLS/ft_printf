/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:56:02 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/19 12:57:21 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	Converts the input to a char.
	Input value is initially converted to int (via va_arg input).
	Applies the format modifiers to the converted char and writes it to stdout.
*/
void	ft_printchar(t_input *input, t_mod *mods)
{
	char	c;

	if (mods->spec == '%')
		c = '%';
	else
		c = va_arg(input->arg, int);
	mods->pads -= 1;
	if (c != '%')
	{
		if (mods->minus == 1)
		{
			write(1, &c, 1);
			ft_print_pads(input, mods);
			input->ret_nbr++;
			return ;
		}
		if (mods->zero == 1 && mods->width == 1)
			ft_print_zeropads(input, mods);
		else if (mods->minus == 0 && mods->width == 1)
			ft_print_pads(input, mods);	
	}
	write(1, &c, 1);
	input->ret_nbr++;
}

