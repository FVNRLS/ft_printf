/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_itoa_unsigned_int.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:03:22 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/20 18:11:10 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* takes already converted (ft_convert_unsigned_int )unsigned int and turns it 
to a string. Returns the converted string.
the conversion to unsigned int happens with dec_base.
if (input == 0)
		len = 1; is for printing 0, to allocate 1 byte memory more.
*/

#include "../ft_printf.h"

char	*pf_itoa_unsigned_int(uint64_t	input)
{
	long		len;
	uint64_t	nbr;
	char		*str;
	static char	dec_base[10] = "0123456789";

	if (input == 0)
	{
		str = pf_strdup("0");
		return (str);
	}
	len = pf_get_dec_nbr(input);
	nbr = input;
	str = ((char *)malloc(len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len != 0)
	{
		len--;
		str[len] = dec_base[nbr % 10];
		nbr /= 10;
	}
	return (str);
}
