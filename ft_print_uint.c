/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:20:01 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/17 21:02:28 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uint(t_input *input, t_mod *mods)
{
	unsigned long	nbr;
	char			*str;
	char			len;

	nbr = va_arg(input->arg, unsigned int);
	str = ft_itoa_uint(nbr);
	len = ft_strlen(str);
	ft_ajust_mods(mods);
	ft_apply_mods(input, mods, str, len);
	free(str);
	str = NULL;
}

		