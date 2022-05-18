/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_prefix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:52:55 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/18 11:57:19 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_apply_prefix(t_input *input, t_mod *mods)
{
	if (mods->hash == 1 || mods->is_ptr == 1)
	{
		if (mods->spec == 'x' || mods->is_ptr == 1)
			write(1, "0x", 2);
		else if (mods->spec == 'X')
			write(1, "0X", 2);
		input->ret_nbr += 2;
	}
}
