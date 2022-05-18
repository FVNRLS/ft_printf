/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:57:21 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/18 17:22:42 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(t_input *input, t_mod *mods)
{
	unsigned long	nbr;
	char			*str;
	int				len;
	
	nbr = va_arg(input->arg, unsigned long);
	str = ft_itoa_hex(nbr, mods);
	if ((long)nbr == LONG_MIN || nbr == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	len = ft_strlen(str);
	ft_ajust_mods(mods);
	ft_apply_mods(input, mods, str, len);

	free(str);
	str = NULL;
}
