/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_convert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:26:43 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/18 12:45:44 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_mods(t_mod *mods)
{
	mods->zero = 0;
	mods->plus = 0;
	mods->minus = 0;
	mods->space = 0;
	mods->hash = 0;
	mods->width = 0;
	mods->prec = 0;
	
	mods->spec = 0;
	mods->pads = 0;
	mods->prec_pads = 0;
	mods->is_string = 0;
	mods->is_ptr = 0;
	mods->is_negative = 0;
}

void	ft_convert(t_input *input, t_mod *mods)
{
	mods->spec = input->format[input->pos]; //format specifier is the input on the current pos
	if (mods->spec == 'c' || mods->spec == '%')
		ft_printchar(input, mods);
	else if (mods->spec == 's')
		ft_printstr(input, mods);
	else if (mods->spec == 'i' || mods->spec == 'd')
	 	ft_printint(input, mods);
	else if (mods->spec == 'p')
		ft_printptr(input, mods);
	else if (mods->spec == 'x' || mods->spec == 'X')
		ft_printhex(input, mods);
	else if (mods->spec == 'u')
		ft_print_uint(input, mods);
}

void	ft_parse(t_input *input, t_mod *mods)
{
	

	while (input->format[input->pos])
	{
		if (input->format[input->pos] != '%') //if input on pos is not % sign -- write it
			input->ret_nbr += write(1, input->format + input->pos, 1);
		else if (ft_strchr(ALL_SYMBOLS, input->format[input->pos + 1])) //if next char is in mod/specs list - start to convert
		{
			input->pos++;
			while (ft_strchr(FORM_MODS, input->format[input->pos])) //firstly search for mods
			{
				ft_check_mods(input, mods); //if found - change the mod flag, check next
				input->pos++;
			}
			if (ft_strchr(FORM_SPECS, input->format[input->pos])) //then convert and apply the mods
				ft_convert(input, mods);
			ft_init_mods(mods); //set modifiers back to 0
		}
		input->pos++; //move to the next pos
	}
}
