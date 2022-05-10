/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:26:43 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/09 13:28:40 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
