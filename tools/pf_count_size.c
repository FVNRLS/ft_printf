/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_count_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:45:59 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/20 18:04:17 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* counts number of digits of an decimal value consders the case if the 
num is negative --> adds 1 byte more to the size.
returns the final size of bytes to allocate for the memory*/

#include "../ft_printf.h"

size_t	pf_count_size(int n)
{	
	int	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}
