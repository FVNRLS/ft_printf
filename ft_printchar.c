/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:56:02 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/10 19:55:01 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(t_input *input, t_mod *mods)
{
	char	c;

	if (mods->spec == '%')
		c = '%';
	else
		c = (char)va_arg(input->arg, int);
	//exceptions handling if '-' and '0' flag are set
	if (mods->minus == 1)
		mods->zero = 0;
	//zero padding
	if (mods->zero == 1 && mods->width == 1)
	{
		ft_print_zeropads(input, mods);
		write(1, &c, 1);
	}
	//blank padding
	else if (mods->minus == 0 && mods->width == 1)
	{
		ft_print_pads(input, mods);
		write(1, &c, 1);
	}
	//left adjustment with padding
	else if (mods->minus == 1 && mods->width == 1)
	{
		write(1, &c, 1);
		ft_print_pads(input, mods);
	}
	//no modifiers
	else if (mods->minus == 0 && mods->width == 0)
		write(1, &c, 1);
	input->ret_nbr++;
}
