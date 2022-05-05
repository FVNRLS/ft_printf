/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_to_upper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:04:30 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/20 18:44:40 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* turns all alphanumeric chars to uppercase */

#include "../ft_printf.h"

void	pf_to_upper(char *str)
{	
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0' )
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}
