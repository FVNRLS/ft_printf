/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:01:38 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/18 10:58:21 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr(t_input *input, t_mod *mods)
{
	unsigned long	ptr;
	char			*str;
	int				len;

	mods->is_ptr = 1;
	ptr = (unsigned long)va_arg(input->arg, void*);
	str = ft_itoa_ptr(ptr);
	len = ft_strlen(str);
	ft_apply_mods(input, mods, str, len);
	input->ret_nbr += 2;
	free(str);
	str = NULL;
}
