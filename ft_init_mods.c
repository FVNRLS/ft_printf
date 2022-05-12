/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_mods.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:48:12 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 19:21:51 by rmazurit         ###   ########.fr       */
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
	mods->precision = 0;
	
	mods->spec = 0;
	mods->pads = 0;
}
