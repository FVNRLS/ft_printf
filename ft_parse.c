/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:26:43 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/06 15:41:56 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse(t_io *io, t_mod *mods)
{
	const char	*g_allsymbols = "cspdiouxX%%#-+ .*0123456789";
	const char	*g_conspecs = "cspdiouxX%%";
	const char	*g_mods = "#-+ .*0123456789";

	while (io->format[io->pos])
	{
		if (io->format[io->pos] != '%')
			io->nprinted += write(1, io->format + io->pos, 1);
		else if (ft_strchr(g_allsymbols, io->format[io->pos + 1]))
		{
			io->pos++;
			while (ft_strchr(g_mods, io->format[io->pos]))
			{
				ft_modifiers(io, mods);
				io->pos++;
			}
			if (ft_strchr(g_conspecs, io->format[io->pos]))
				ft_convert(io, mods);
			ft_initmods(mods);
		}
		io->pos++;
	}
}
