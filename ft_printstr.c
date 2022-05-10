/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:39:30 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/10 19:54:03 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//the resultpadding = number of pads - length of the string

void	ft_printstr(t_input *input, t_mod *mods)
{
	char	*str;
	int		res_pads;

	str = va_arg(input->arg, char *);
	if (mods->width == 0)
		mods->minus = 0;
	res_pads = ((mods->pads - ft_strlen(str)) + 1);
	if (res_pads > 0)
		mods->pads = res_pads;
	else
		mods->pads = 0;
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
	//no modifiers
	else if (mods->minus == 0 && mods->width == 0)
		ft_putstr(str, input);
}