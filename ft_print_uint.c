/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:20:01 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 11:56:16 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uint(t_input *input, t_mod *mods)
{
	unsigned long	nbr;
	char			*str;
	// char			res_pads;

	mods->hash = 1; //delete!!!!
	nbr = va_arg(input->arg, unsigned int);
	str = ft_itoa_uint(nbr);
	ft_putstr(str, input);
	
	
	free(str);
	str = NULL;
}

// //adjust mods
// 	if (mods->minus == 1)
// 		mods->zero = 0;
// 	if (mods->width == 0)
// 	{
// 		mods->minus = 0;
// 		mods->zero = 0;
// 	}
// 	if (mods->precision == 1)
// 		mods->zero = 0;
// 	if (mods->hash == 1 && mods->precision == 0)
// 		mods->pads -= 2;
	
// 	//count num of chars in str and include them to pads calc
// 	res_pads = ((mods->pads - ft_strlen(str)) + 1);
// 	if (res_pads > 0)
// 		mods->pads = res_pads;
	
// 	//blank padding
// 	if (mods->minus == 0 && mods->width == 1 && mods->zero == 0 && mods->precision == 0)
// 	{
// 		ft_print_pads(input, mods);
// 		if (mods->hash == 1)
// 			ft_write_hash(input, mods);
// 		ft_putstr(str, input);
// 	}
// 	else if (mods->minus == 0 && mods->width == 1 && mods->zero == 0 && mods->precision == 1)
// 	{
// 		if (mods->hash == 1)
// 			ft_write_hash(input, mods);
// 		ft_print_zeropads(input, mods);
// 		ft_putstr(str, input);
// 	}
// 	//left adjustment with padding
// 	else if (mods->minus == 1 && mods->width == 1)
// 	{	
// 		if (mods->hash == 1)
// 			ft_write_hash(input, mods);
// 		ft_putstr(str, input);
// 		ft_print_pads(input, mods);
// 	}
// 	//zero padding
// 	else if (mods->zero == 1 && mods->width == 1)
// 	{
// 		ft_print_zeropads(input, mods);
// 		if (mods->hash == 1)
// 			ft_write_hash(input, mods);
// 		ft_putstr(str, input);
// 	}
// 	//no modifiers
// 	if (mods->minus == 0 && mods->width == 0 && mods->zero == 0 
// 		&& mods->hash == 0 && mods->precision == 0)
// 		ft_putstr(str, input);
		