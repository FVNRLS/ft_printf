/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:43:55 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/18 14:48:46 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printint(t_input *input, t_mod *mods)
{
	int		nbr;
	char	*str;
	int		len;
		
	nbr = va_arg(input->arg, int);
	if (nbr < 0)
		mods->is_negative = 1;
	str = ft_itoa_dec(nbr);
	len = ft_strlen(str);
	ft_ajust_mods(mods);
	ft_apply_mods(input, mods, str, len);
	if (mods->prec == 1 && mods->pads == 0 && nbr == 0)
	{
		free(str);
		str = NULL;
		return ;
	}		
	free(str);
	str = NULL;
}
