/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:39:30 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/18 11:01:59 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//the resultpadding = number of pads - length of the string

void	ft_printstr(t_input *input, t_mod *mods)
{
	char	*str;
	int		len;

	mods->is_string = 1;
	str = va_arg(input->arg, char *);
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	ft_ajust_mods(mods);
	ft_apply_mods(input, mods, str, len);
}




