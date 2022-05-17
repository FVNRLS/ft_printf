/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pads.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:11:05 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/17 11:13:38 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_prec_pads(t_input *input, t_mod *mods)
{
	int	i;

	i = 0;
	while (i < mods->prec_pads)
	{
		write(1, " ", 1);
		i++;
		input->ret_nbr++;
	}
}

void	ft_print_zeropads(t_input *input, t_mod *mods)
{
	int	i;

	i = 0;
	while (i < mods->pads)
	{
		write(1, "0", 1);
		i++;
		input->ret_nbr++;
	}
}

void	ft_print_pads(t_input *input, t_mod *mods)
{
	int	i;

	i = 0;
	while (i < mods->pads)
	{
		write(1, " ", 1);
		i++;
		input->ret_nbr++;
	}
}