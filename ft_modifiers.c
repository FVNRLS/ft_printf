/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modifiers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:22 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/06 15:28:21 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_zeroisflag(t_io *io)
{
	int	i;

	i = 1;
	while (io->format[io->pos - i] == '0')
		i++;
	if (ft_isdigit(io->format[io->pos - i]) || io->format[io-> pos - i] == '.')
		return (0);
	return (1);
}

static void	ft_width(t_io *io, t_mod *mods)
{
	if (io->format[io->pos] == '*')
		mods->width = va_arg(io->arg, int);
	else if (io->format[io->pos - 1] == '0' && ft_zeroisflag(io))
		mods->width = io->format[io->pos] - '0';
	else if (!ft_isdigit(io->format[io->pos - 1]))
		mods->width = io->format[io->pos] - '0';
	else
		mods->width = (mods->width * 10) + (io->format[io->pos] - '0');
}

static void	ft_precision(t_io *io, t_mod *mods)
{
	if (io->format[io->pos] == '*')
	{
		mods->precision = va_arg(io->arg, int);
		mods->adj_precision = 0;
		return ;
	}
	else if (!ft_isdigit(io->format[io->pos - 1]))
		mods->precision = io->format[io->pos] - '0';
	else
		mods->precision = (mods->precision * 10) + (io->format[io->pos] - '0');
	if (!ft_isdigit(io->format[io->pos + 1]))
		mods->adj_precision = 0;
}

void	ft_modifiers(t_io *io, t_mod *mods)
{
	if (io->format[io->pos] == '0' && ft_zeroisflag(io))
		mods->zeropad = 1;
	else if (ft_isdigit(io->format[io->pos]) && !mods->adj_precision)
		ft_width(io, mods);
	else if (ft_isdigit(io->format[io->pos]))
		ft_precision(io, mods);
	else if (io->format[io->pos] == '*' && !mods->adj_precision)
		ft_width(io, mods);
	else if (io->format[io->pos] == '*')
		ft_precision(io, mods);
	else if (io->format[io->pos] == '+')
		mods->plus = 1;
	else if (io->format[io->pos] == '-')
		mods->leftadj = 1;
	else if (io->format[io->pos] == ' ')
		mods->space = 1;
	else if (io->format[io->pos] == '#')
		mods->altform = 1;
	else if (io->format[io->pos] == '.')
	{
		mods->precision = 0;
		if (ft_isdigit(io->format[io->pos + 1]))
			mods->adj_precision = 1;
	}
}
