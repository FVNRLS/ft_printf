/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:56:02 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/17 21:36:31 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(t_input *input, t_mod *mods)
{
	char	c;

	if (mods->spec == '%')
		c = '%';
	else
		c = va_arg(input->arg, int);
	mods->pads -= 1;
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
	write(1, &c, 1);
	input->ret_nbr++;
}

