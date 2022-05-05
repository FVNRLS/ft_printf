/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:05:09 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/19 18:45:10 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_convert_str(va_list arg)
{	
	char	*str;
	int		len;

	str = pf_strdup((char *)va_arg(arg, char *));
	if (!str)
	{
		free(str);
		return (6);
	}
	len = pf_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}
