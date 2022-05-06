/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:47 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/06 13:53:06 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_initio(t_io *io, const char *format, va_list ap)
{
	io->format = format;
	va_copy(io->ap, ap);
	va_end(ap);
	io->nprinted = 0;
	io->pos = 0;
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	t_mod	mods;
	t_io	io;

	va_start(ap, format);
	ft_initio(&io, format, ap);
	ft_initmods(&mods);
	ft_parse(&io, &mods);
	va_end(ap);
	return (io.nprinted);
}
