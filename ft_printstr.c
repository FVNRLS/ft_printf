/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:39:30 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 19:22:43 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//the resultpadding = number of pads - length of the string

void	ft_put_str(char *str, t_input *input, t_mod *mods)
{
	int	i;
	
	if (!str)
		return ;
	i = 0;
	if (mods->precision == 1)
	{
		while (i < mods->pads && str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;		
			input->ret_nbr++; //increment return after every write
		}
	}
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

void	ft_printstr(t_input *input, t_mod *mods)
{
	char	*str;
	int		res_pads;

	str = va_arg(input->arg, char *);
	if (str == NULL)
		str = "(null)"; 
	if (mods->width == 0)
		mods->minus = 0;
	res_pads = ((mods->pads - ft_strlen(str)) + 1);
	if (mods->precision == 0)
	{
		if (res_pads > 0)
			mods->pads = res_pads;
		else
			mods->pads = 0;
	}
	//precision exception
	if (mods->width == 1 && mods->precision == 1)
		ft_put_str(str, input, mods);
	//blank padding
	else if (mods->minus == 0 && mods->width == 1 && mods->precision == 0)
	{
		ft_print_pads(input, mods);
		ft_put_str(str, input, mods);
	}
	//left adjustment with padding
	else if (mods->minus == 1 && mods->width == 1 && mods->precision == 0)
	{
		ft_put_str(str, input, mods);
		ft_print_pads(input, mods);
	}
	//no modifiers
	else if (mods->minus == 0 && mods->width == 0 && mods->precision == 0)
		ft_put_str(str, input, mods);
}