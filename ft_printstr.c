/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:49:28 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/06 15:28:58 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(t_io *io, t_mod *mods)
{
	size_t	len;
	char	*s;
	size_t	i;

	s = va_arg(io->arg, char *);
	if (s == NULL)
		s = "(null)";
	len = ft_strlen(s);
	if (mods->precision >= 0 && (size_t) mods->precision < len)
		len = (size_t) mods->precision;
	if (len < (size_t) mods->width)
		mods->pads = mods->width - (int) len;
	if (!mods->leftadj && mods->pads)
		ft_pad(io, mods);
	i = 0;
	while (i < len && s[i])
	{
		io->nprinted += write(1, s + i, 1);
		i++;
	}
	if (mods->leftadj && mods->pads)
		ft_pad(io, mods);
}
