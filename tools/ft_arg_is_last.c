/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_is_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:47:30 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/12 15:40:22 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//check if the arg is the last one in the va_list

int		ft_arg_is_last(t_input *input)
{
	int	i;
	
	i = input->pos;
	while (input->format[i] != '\0')
	{
		if (input->format[i] == '%')
			return (0);
		i++;	
	}
	return (1);
}
