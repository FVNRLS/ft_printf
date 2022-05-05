/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:04:16 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/20 18:12:20 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks the uppercase flag. If uppercase = 1, converts all alphanum. chars
to uppercase. Prints the string to stdout */

#include "../ft_printf.h"

void	pf_putstr_hex(char *str, int uppercase)
{	
	int	i;

	if (!str)
		return ;
	if (uppercase == 1)
		pf_to_upper(str);
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
