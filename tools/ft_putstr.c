/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:34:37 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/10 18:57:15 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr(char *str, t_input *input)
{
	int	i;
	
	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		input->ret_nbr++; //increment return after every write
	}
}