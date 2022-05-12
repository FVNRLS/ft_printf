/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:57:21 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 15:46:31 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_hash(t_input *input, t_mod *mods)
{
	if (mods->spec == 'x')
		write(1, "0x", 2);
	else if (mods->spec == 'X')
		write(1, "0X", 2);
	input->ret_nbr += 2;
}

void	ft_printhex(t_input *input, t_mod *mods)
{
	unsigned long	nbr;
	char			*str;
	char			res_pads;

	nbr = va_arg(input->arg, unsigned long);
	str = ft_itoa_hex(nbr, mods);

	//adjust mods
	if (mods->minus == 1)
		mods->zero = 0;
	if (mods->width == 0)
	{
		mods->minus = 0;
		mods->zero = 0;
	}
	if (mods->precision == 1)
		mods->zero = 0;
	if (mods->hash == 1 && mods->precision == 0)
		mods->pads -= 2;
	
	//count num of chars in str and include them to pads calc
	res_pads = ((mods->pads - ft_strlen(str)) + 1);
	if (res_pads > 0)
		mods->pads = res_pads;
	else
		mods->pads = 0;
	
	//blank padding
	if (mods->minus == 0 && mods->width == 1 && mods->zero == 0 && mods->precision == 0)
	{
		ft_print_pads(input, mods);
		if (mods->hash == 1)
			ft_write_hash(input, mods);
		ft_putstr(str, input);
	}
	else if (mods->minus == 0 && mods->width == 1 && mods->zero == 0 && mods->precision == 1)
	{
		if (mods->hash == 1)
			ft_write_hash(input, mods);
		ft_print_zeropads(input, mods);
		ft_putstr(str, input);
	}
	//left adjustment with padding
	else if (mods->minus == 1 && mods->width == 1)
	{	
		if (mods->hash == 1)
			ft_write_hash(input, mods);
		ft_putstr(str, input);
		ft_print_pads(input, mods);
	}
	//zero padding
	else if (mods->zero == 1 && mods->width == 1)
	{
		ft_print_zeropads(input, mods);
		if (mods->hash == 1)
			ft_write_hash(input, mods);
		ft_putstr(str, input);
	}
	//no modifiers
	if (mods->minus == 0 && mods->width == 0 && mods->zero == 0 
		&& mods->hash == 0 && mods->precision == 0)
		ft_putstr(str, input);
	free(str);
	str = NULL;
}
