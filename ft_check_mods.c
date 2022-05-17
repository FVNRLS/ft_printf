/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_mods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:12:19 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/17 21:14:03 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	Order prototype:
	%[flags][width][.precision][.length]specifier
*/

void	ft_check_mods(t_input *input, t_mod *mods)
{
	mods->spec = input->format[input->pos];
	//firstly check the flags

	//check if form mod is zero and count the number of pads
	// if the previous element isn't a digit ten 0 is a flag - otherwise its a 
	if (mods->spec == '0' && (ft_isdigit(input->format[input->pos - 1]) == 0) 
		&& ft_isdigit(input->format[input->pos + 1]) == 1)
		mods->zero = 1;
	if (mods->spec == '+')
		mods->plus = 1;
	if (mods->spec == '-')
		mods->minus = 1;
	if (mods->spec == ' ')
		mods->space = 1;
	if (mods->spec == '#')
		mods->hash = 1;
		
	// //then check the width and precision in combination
	if (ft_isdigit(mods->spec) == 1)
	{
		mods->width = 1;
		if (mods->pads != 0)
			mods->pads *= 10;
		mods->pads += (mods->spec - '0');
	}
	//then check the precision
	if (mods->spec == '.')
	{
		mods->prec = 1;
		mods->prec_pads = mods->pads;
		mods->width = 0;
		mods->pads = 0;
	}
	//exceptions
}
