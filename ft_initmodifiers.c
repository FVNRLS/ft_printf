/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initmodifiers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:12 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/06 13:52:49 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_initmods(t_mod *mods)
{
	mods->altform = 0;
	mods->zeropad = 0;
	mods->leftadj = 0;
	mods->space = 0;
	mods->plus = 0;
	mods->width = 0;
	mods->precision = -1;
	mods->adj_precision = 0;
	mods->conspec = 0;
	mods->base = 0;
	mods->putminus = 0;
	mods->pads = 0;
}
