/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:29 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/06 13:52:55 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pad(t_io *io, t_mod *mods)
{
	char	c;

	if (mods->zeropad && !mods->leftadj)
		c = '0';
	else
		c = ' ';
	while (mods->pads)
	{
		io->nprinted += write(1, &c, 1);
		mods->pads--;
	}
}
