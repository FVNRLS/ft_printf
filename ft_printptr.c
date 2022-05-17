/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:01:38 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/17 20:45:30 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr(t_input *input, t_mod *mods)
{
	unsigned long	ptr;
	char			*str;
	char			res_pads;

	ptr = (unsigned long)va_arg(input->arg, void*);
	str = ft_itoa_ptr(ptr);
	res_pads = ((mods->pads - ft_strlen(str)) - 1);
	if (res_pads > 0)
		mods->pads = res_pads;
	else
		mods->pads = 0;
	//blank padding
	if (mods->minus == 0 && mods->width == 1)
	{
		ft_print_pads(input, mods);
		write(1, "0x", 2);
		ft_putstr(str, input, mods);
	}
	//left adjustment with padding
	else if (mods->minus == 1 && mods->width == 1)
	{
		write(1, "0x", 2);
		ft_putstr(str, input, mods);
		ft_print_pads(input, mods);
	}
	//no modifiers
	else if (mods->minus == 0 && mods->width == 0)
	{
		write(1, "0x", 2);
		ft_putstr(str, input, mods);
	}
	//written 2 chars (0x)
	input->ret_nbr += 2;

	free(str);
	str = NULL;
}
