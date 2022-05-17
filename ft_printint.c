/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:43:55 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/17 21:14:03 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_dec_str(char *str, t_input *input, t_mod *mods)
{
	int	i;
	
	i = 0;
	//number of pads is bigger than the string
	if (mods->prec == 1 && (mods->pads > (int)ft_strlen(str)))
	{
		if (str[0] == 0)
			return ;
		while (i < mods->pads && str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;		
			input->ret_nbr++; //increment return after every write
		}
	}
	//number of pads is smaller than the string
	else if (mods->prec == 1 && (mods->pads <= (int)ft_strlen(str)))
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;		
			input->ret_nbr++; //increment return after every write
		}
	}
	//no precision
	else if (mods->prec == 0)
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
			input->ret_nbr++; //increment return after every write
		}
	}
}

void	ft_printint(t_input *input, t_mod *mods)
{
	int		nbr;
	char	*str;
	char	res_pads;
		
	nbr = va_arg(input->arg, int);
	str = ft_itoa_dec(nbr);
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
	if (mods->prec == 1)
		mods->zero = 0;
	
	if (nbr < 0)
		mods->pads -= 1;
	if (mods->prec == 1 && mods->pads == 0 && nbr == 0)
	{
		free(str);
		str = NULL;
		return ;
	}
	//count num of chars in str and include them to pads calc
	res_pads = ((mods->pads - ft_strlen(str)) + 1);
	if (mods->prec == 0)
	{
		if (res_pads > 0)
			mods->pads = res_pads;
		else
			mods->pads = 0;
	}
	else if (mods->prec == 1)
	{
		if (res_pads > 0)
			mods->pads = res_pads;
	}
		
	//blank padding without precision
	if (mods->minus == 0 && mods->width == 1 && mods->zero == 0 && mods->prec == 0)
	{
		ft_print_pads(input, mods);
		if (nbr < 0)
		{
			write(1, "-", 1);
			input->ret_nbr++;
		}
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
		ft_put_dec_str(str, input, mods);
	}
	//blank padding with precision
	else if (mods->minus == 0 && mods->zero == 0 && mods->prec == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			mods->pads++;
			input->ret_nbr++;
		}
		if (res_pads > 0)
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
		ft_put_dec_str(str, input, mods);
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
		ft_put_dec_str(str, input, mods);
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
		ft_put_dec_str(str, input, mods);
	}
	//no modifiers
	if (mods->minus == 0 && mods->width == 0 && mods->zero == 0 
		&& mods->plus == 0 && mods->space == 0 && mods->prec == 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			input->ret_nbr++;
		}
		ft_put_dec_str(str, input, mods);
	}
			
	free(str);
	str = NULL;
}





//{
		// if (ft_arg_is_last(input) == 0)
	// {
	// 	if (mods->precision == 1)
	// 	{
	// 		if (nbr < 0)
	// 		{
	// 			str[0] = '0';
	// 			write(1, "-", 1);
	// 			input->ret_nbr++;
	// 			ft_print_zeropads(input, mods);
	// 		}
	// 		else if (nbr >= 0)
	// 			ft_print_zeropads(input, mods);
	// 	}
	// 	if (mods->plus == 1 && nbr >= 0) //write plus if nbr is 0 or positive
	// 	{
	// 		write(1, "+", 1);
	// 		input->ret_nbr++;
	// 	}
	// 	else if (mods->space == 1 && nbr >= 0)
	// 	{
	// 		write(1, " ", 1);
	// 		input->ret_nbr++;
	// 	}
	// 	ft_putstr(str, input);
	// }
	// else if (ft_arg_is_last(input) == 1)
	// {
//}