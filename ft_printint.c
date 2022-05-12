/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:43:55 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/11 18:47:46 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printint(t_input *input, t_mod *mods)
{
	int		nbr;
	char	*str;
	char	res_pads;
		
	nbr = va_arg(input->arg, int);
	str = ft_itoa_dec(nbr);
	//exception for negative num in combo with precision
	//adjust mods
	if (mods->minus == 1)
		mods->zero = 0;
	if (mods->width == 0)
	{
		mods->minus = 0;
		mods->zero = 0;
	}
	if (mods->plus == 1)
	{
		mods->space = 0;
		mods->pads--;
	}
	if (mods->space == 1)
		mods->pads--;
	if (mods->precision == 1)
		mods->zero = 0;
	
	//count num of chars in str and include them to pads calc
	res_pads = ((mods->pads - ft_strlen(str)) + 1);
	if (res_pads > 0)
		mods->pads = res_pads;
	
	if (ft_arg_is_last(input) == 0)
	{
		if (mods->precision == 1)
		{
			if (nbr < 0)
			{
				str[0] = '0';
				write(1, "-", 1);
				input->ret_nbr++;
				ft_print_zeropads(input, mods);
			}
			else if (nbr >= 0)
				ft_print_zeropads(input, mods);
		}
		if (mods->plus == 1 && nbr >= 0) //write plus if nbr is 0 or positive
		{
			write(1, "+", 1);
			input->ret_nbr++;
		}
		else if (mods->space == 1 && nbr >= 0)
		{
			write(1, " ", 1);
			input->ret_nbr++;
		}
		ft_putstr(str, input);
	}
	else if (ft_arg_is_last(input) == 1)
	{
		
			
		//blank padding
		if (mods->minus == 0 && mods->width == 1 && mods->zero == 0 && mods->precision == 0)
		{
			ft_print_pads(input, mods);
			if (mods->plus == 1 && nbr >= 0) //write plus if nbr is 0 or positive
			{
				write(1, "+", 1);
				input->ret_nbr++;
			}
			else if (mods->space == 1)
			{
				write(1, " ", 1);
				input->ret_nbr++;
			}
			ft_putstr(str, input);
		}
		if (mods->minus == 0 && mods->width == 1 && mods->zero == 0 && mods->precision == 1)
		{
			ft_print_zeropads(input, mods);
			if (mods->plus == 1 && nbr >= 0) //write plus if nbr is 0 or positive
			{
				write(1, "+", 1);
				input->ret_nbr++;
			}
			else if (mods->space == 1)
			{
				write(1, " ", 1);
				input->ret_nbr++;
			}
			ft_putstr(str, input);
		}
		//left adjustment with padding
		else if (mods->minus == 1 && mods->width == 1)
		{	
			if (mods->plus == 1 && nbr >= 0) //write plus if nbr is 0 or positive
			{
				write(1, "+", 1);
				input->ret_nbr++;
			}
			else if (mods->space == 1)
			{
				write(1, " ", 1);
				input->ret_nbr++;
			}
			ft_putstr(str, input);
			ft_print_pads(input, mods);
		}
		//zero padding
		else if (mods->zero == 1 && mods->width == 1)
		{
			ft_print_zeropads(input, mods);
			if (mods->plus == 1 && nbr >= 0) //write plus if nbr is 0 or positive
			{
				write(1, "+", 1);
				input->ret_nbr++;
			}
			else if (mods->space == 1)
			{
				write(1, " ", 1);
				input->ret_nbr++;
			}
			ft_putstr(str, input);
		}
		

		//no modifiers
		if (mods->minus == 0 && mods->width == 0 && mods->zero == 0 
			&& mods->plus == 0 && mods->space == 0 && mods->precision == 0)
			ft_putstr(str, input);
		
	}
		
	free(str);
	str = NULL;
}
