/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:47 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/06 15:40:13 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_initio(t_io *io, const char *format, va_list arg)
{
	io->format = format;
	va_copy(io->arg, arg);
	// va_end(arg);
	io->nprinted = 0;
	io->pos = 0;
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	t_mod	mods;
	t_io	io;

	va_start(arg, format); //start processing arguments
	ft_initio(&io, format, arg); //process the argument to the struct and initialize the struct elements to 0 
	ft_initmods(&mods); //initialize all format modifiers to 0 (except precision)
	ft_parse(&io, &mods); //parse the io struct and starting modifiers and convert the arguments
	va_end(arg); //stop processing arguments
	return (io.nprinted); //return the number of printed characters
}
