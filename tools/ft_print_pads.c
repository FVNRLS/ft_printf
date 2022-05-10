/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pads.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:11:05 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/10 19:00:14 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_zeropads(t_input *input, t_mod *mods)
{
	int	i;

	i = 0;
	while (i < mods->pads - 1)
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
	while (i < mods->pads - 1)
	{
		write(1, " ", 1);
		i++;
		input->ret_nbr++;
	}
}