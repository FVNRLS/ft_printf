/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:40 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/06 13:53:03 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(t_io *io, t_mod *mods)
{
	char	c;

	if (mods->conspec == '%')
		c = '%';
	else
		c = (char) va_arg(io->ap, int);
	if (mods-> width > 1)
		mods->pads = mods->width - 1;
	if (!mods->leftadj && mods->pads)
		ft_pad(io, mods);
	io->nprinted += write(1, &c, 1);
	if (mods->leftadj && mods->pads)
		ft_pad(io, mods);
}
