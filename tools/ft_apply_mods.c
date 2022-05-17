/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_mods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:39:33 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/18 00:03:39 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_ajust_mods(t_mod *mods)
{
	//adjust mods
	if (mods->minus == 1)
		mods->zero = 0;
	if (mods->width == 0)
		mods->minus = 0;
	if (mods->width == 0 && mods->prec_pads == 1)
		mods->zero = 0;
	if (mods->prec == 1)
		mods->zero = 0;
	if (mods->pads == 0)
		mods->width = 0;
}

void	ft_ajust_pads(t_mod *mods, char *str, int len)
{
	if (mods->is_string == 1 && mods->prec == 1)
	{
		if (mods->prec_pads < mods->pads && mods->pads > len)
			mods->prec_pads -= len;
		else
			mods->prec_pads -= mods->pads;
	}
	else if (mods->is_ptr == 1) //TODO: (nil) --> how to fix???
		mods->pads -= (len + 2);
	else if (mods->prec_pads == 0)
		mods->pads -= len;
	else if (mods->prec_pads > 0 && mods->is_string == 0)
	{
		if (mods->prec_pads > mods->pads && mods->pads <= len && str[0] != '0')
			mods->prec_pads -= len;
		else
			mods->prec_pads -= mods->pads;
		mods->pads -= (ft_strlen(str));
	}
}

void	ft_apply_prec_mods(t_input *input, t_mod *mods, char *str)
{	
	if (mods->is_string == 1)
	{
		ft_putstr(str, input, mods);
		ft_print_prec_pads(input, mods);
	}
	else if (mods->minus == 0 && mods->prec == 1)
	{
		ft_print_prec_pads(input, mods);
		ft_print_zeropads(input, mods);
		ft_putstr(str, input, mods);
	}
	else if (mods->minus == 1 && mods->prec == 1)
	{	
		ft_print_zeropads(input, mods);
		ft_putstr(str, input, mods);
		ft_print_prec_pads(input, mods);
	}
}

void	ft_apply_noprec_mods(t_input *input, t_mod *mods, char *str)
{
	//blank padding without precision
	if (mods->minus == 0 && mods->width == 1 && mods->zero == 0 && mods->prec == 0)
	{
		ft_print_pads(input, mods);
		if (mods->is_ptr == 1)
			write(1, "0x", 2);
		ft_putstr(str, input, mods);
	}

	//left adjustment with padding without prec prefix (digit before '.')
	if (mods->minus == 1 && mods->prec == 0)
	{	
		if (mods->is_ptr == 1)
			write(1, "0x", 2);
		ft_putstr(str, input, mods);
		ft_print_pads(input, mods);
	}
	//left adjustment with padding with prec prefix (digit before '.')
	
	//zero padding
	if (mods->zero == 1 && mods->width == 1)
	{
		ft_print_zeropads(input, mods);
		ft_putstr(str, input, mods);
	}
	//no modifiers
	if (mods->minus == 0 && mods->width == 0 && mods->zero == 0 
		&& mods->prec == 0 && mods->hash == 0 && mods->space == 0 && mods->plus == 0)
	{
		if (mods->is_ptr == 1)
			write(1, "0x", 2);
		ft_putstr(str, input, mods);
	}
}


void	ft_apply_mods(t_input *input, t_mod *mods, char *str, int len)
{
	ft_ajust_pads(mods, str, len);
	if (mods->prec == 1)
		ft_apply_prec_mods(input, mods, str);		
	else if (mods->prec == 0)
		ft_apply_noprec_mods(input, mods, str);
}