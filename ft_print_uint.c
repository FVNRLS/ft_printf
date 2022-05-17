/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:20:01 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/17 12:38:25 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_uint_str(char *str, t_input *input, t_mod *mods)
{
	int	i;
	
	i = 0;
	//number of pads is bigger than the string
	if (mods->precision == 1)
	{	
		if (mods->width == 0 && str[0] == '0')
			return ;
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;		
			input->ret_nbr++; //increment return after every write
		}
	}
	//no precision
	else if (mods->precision == 0)
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
			input->ret_nbr++; //increment return after every write
		}
	}
}

void	ft_print_uint(t_input *input, t_mod *mods)
{
	unsigned long	nbr;
	char			*str;

	nbr = va_arg(input->arg, unsigned int);
	str = ft_itoa_uint(nbr);	

	//adjust mods
	if (mods->minus == 1)
		mods->zero = 0;
	if (mods->width == 0 && mods->prec_pads == 0)
	{
		mods->zero = 0;
		mods->minus = 0;
	}
	else if(mods->width == 0 && mods->prec_pads == 1)
		mods->zero = 0;
	if (mods->precision == 1)
		mods->zero = 0;
	if (mods->pads == 0)
		mods->width = 0;

	
	//count num of chars in str and include them to pads calc
	if (mods->prec_pads == 0)
		mods->pads -= (ft_strlen(str));

	//blank padding without precision
	if (mods->minus == 0 && mods->width == 1 && mods->zero == 0 && mods->precision == 0)
	{
		ft_print_pads(input, mods);
		ft_put_uint_str(str, input, mods);
	}
	//blank padding with precision without prec prefix (digit before '.')
	else if (mods->minus == 0 && mods->zero == 0 && mods->precision == 1 && mods->prec_pads == 0)
	{
		if (mods->pads > 0)
			ft_print_zeropads(input, mods);
		ft_put_uint_str(str, input, mods);
	}
	//left adjustment with padding without prec prefix (digit before '.')
	else if (mods->minus == 1 && mods->precision == 0)
	{	
		ft_put_uint_str(str, input, mods);
		ft_print_pads(input, mods);
	}
	//left adjustment with padding with prec prefix (digit before '.')
	else if (mods->minus == 1 && mods->precision == 1) //TODO: differenz prec, width and srlen!
	{	
		if (mods->prec_pads >= ft_strlen(str) && mods->prec_pads > ft_strlen(str) && mods->pads != ft_strlen(str))
			mods->prec_pads -= mods->pads;
		else if (mods->prec_pads > mods->pads && mods->pads == ft_strlen(str))
			mods->prec_pads -= ft_strlen(str);
		if (mods->prec_pads <= ft_strlen(str))
			mods->prec_pads = 0;
		mods->pads -= (ft_strlen(str));
		
		ft_print_zeropads(input, mods);
		ft_put_uint_str(str, input, mods);
		ft_print_prec_pads(input, mods);
	}
	//zero padding
	else if (mods->zero == 1 && mods->width == 1)
	{
		ft_print_zeropads(input, mods);
		ft_put_uint_str(str, input, mods);
	}
	//no modifiers
	if (mods->minus == 0 && mods->width == 0 && mods->zero == 0 
		&& mods->precision == 0)
		ft_putstr(str, input);
	
	free(str);
	str = NULL;
}

		