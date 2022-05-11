/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:43:55 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/11 14:21:25 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//check if the arg is the last one
int		ft_arg_is_last(t_input *input)
{
	int	i;
	
	i = input->pos;
	while (input->format[i] != '\0')
	{
		if (input->format[i] == '%')
			return (0);
		i++;	
	}
	return (1);
}

void	ft_printint(t_input *input, t_mod *mods)
{
	int		nbr;
	char	*str;
	char	res_pads;
		
	nbr = va_arg(input->arg, int);
	str = ft_itoa_dec(nbr);
	
	if (ft_arg_is_last(input) == 0)
		ft_putstr(str, input);
	else if (ft_arg_is_last(input) == 1)
	{
		//ajust mods
		if (mods->minus == 1)
			mods->zero = 0;
		if (mods->width == 0)
		{
			mods->minus = 0;
			mods->zero = 0;
		}
		//count num of chars in str and include them to pads calc
		res_pads = ((mods->pads - ft_strlen(str)) + 1);
		if (res_pads > 0)
			mods->pads = res_pads;
			
		//blank padding
		if (mods->minus == 0 && mods->width == 1)
		{
			ft_print_pads(input, mods);
			ft_putstr(str, input);
		}
		//left adjustment with padding
		else if (mods->minus == 1 && mods->width == 1)
		{
			ft_putstr(str, input);
			ft_print_pads(input, mods);
		}
		//zero padding
		else if (mods->zero == 1 && mods->width == 1)
		{
			ft_print_zeropads(input, mods);
			ft_putstr(str, input);
		}
		//no modifiers
		else if (mods->minus == 0 && mods->width == 0)
			ft_putstr(str, input);	
	}
		
	free(str);
	str = NULL;
}
