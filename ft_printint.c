/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:49:02 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/06 15:28:41 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printint(t_io *io, t_mod *mods)
{
	int	nbr;

	nbr = va_arg(io->arg, int);
	if (nbr == -2147483648)
	{
		mods->putminus = 1;
		ft_printnbr(io, mods, 2147483648);
		return ;
	}
	if (nbr < 0)
	{
		mods->putminus = 1;
		nbr = nbr * -1;
	}
	ft_printnbr(io, mods, (unsigned long int) nbr);
}
