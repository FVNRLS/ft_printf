/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:57:21 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/18 11:20:50 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_apply_hash_prefix(t_input *input, t_mod *mods)
{
	if (mods->hash == 1 || mods->is_ptr == 1)
	{
		if (mods->spec == 'x' || mods->is_ptr == 1)
			write(1, "0x", 2);
		else if (mods->spec == 'X')
			write(1, "0X", 2);
		if (mods->is_ptr == 0)
			input->ret_nbr += 2;
	}
}

void	ft_printhex(t_input *input, t_mod *mods)
{
	unsigned long	nbr;
	char			*str;
	int				len;

	nbr = va_arg(input->arg, unsigned long);
	str = ft_itoa_hex(nbr, mods);
	len = ft_strlen(str);
	ft_ajust_mods(mods);
	ft_apply_mods(input, mods, str, len);

	free(str);
	str = NULL;
}
