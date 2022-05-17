/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_mods.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:12 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/17 23:54:34 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_mods(t_mod *mods)
{
	mods->zero = 0;
	mods->plus = 0;
	mods->minus = 0;
	mods->space = 0;
	mods->hash = 0;
	mods->width = 0;
	mods->prec = 0;
	
	mods->spec = 0;
	mods->pads = 0;
	mods->prec_pads = 0;
	mods->is_string = 0;
	mods->is_ptr = 0;
}
