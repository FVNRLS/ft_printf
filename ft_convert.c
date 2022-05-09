/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:04 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/09 12:55:37 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_adjustmods(t_mod *mods)
{
	if (mods->conspec == 'i' || mods->conspec == 'd'
		|| mods->conspec == 'u')
	{
		mods->altform = 0;
		mods->base = 10;
	}
	if (mods->conspec == 'u' || mods->conspec == 'x'
		|| mods->conspec == 'X' || mods->conspec == 'p')
	{
		mods->plus = 0;
		mods->space = 0;
	}
	if (mods->conspec == 'x' || mods->conspec == 'X'
		|| mods->conspec == 'p')
		mods->base = 16;
	if (mods->precision >= 0 && mods->conspec != 'c'
		&& mods->conspec != 's' && mods->conspec != '%')
		mods->zeropad = 0;
}

void	ft_convert(t_input *input, t_mod *mods)
{
	mods->conspec = input->format[input->pos];
	ft_adjustmods(mods);
	if (mods->conspec == 'c' || mods->conspec == '%')
		ft_printchar(input, mods);
	else if (mods->conspec == 's')
		ft_printstr(input, mods);
	else if (mods->conspec == 'i' || mods->conspec == 'd')
		ft_printint(input, mods);
	else if (mods->conspec == 'u' || mods->conspec == 'x'
		|| mods->conspec == 'X')
		ft_printnbr(input, mods, (unsigned long int) va_arg(input->arg, unsigned int));
	else
		ft_printnbr(input, mods, va_arg(input->arg, unsigned long int));
}
