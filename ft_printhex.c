/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:57:21 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/11 19:49:23 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_count_size_hex(unsigned long n)
{	
	int	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n /= 16;
	}
	return (size);
}

char	*ft_itoa_hex(unsigned long n, t_mod *mods)
{
	char	*str;
	char	*hex_base;
	size_t	size;
	
	if (n == 0)
	{
		str = (malloc(sizeof(char) * 2));
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (mods->spec == 'x')
		hex_base = HEX_BASE_LOWERCASE;
	else if (mods->spec == 'X')
		hex_base = HEX_BASE_UPPERCASE;
	
	size = ft_count_size_hex(n);
	str = (malloc(sizeof(char) * (size + 1)));
	if (!str)
		return (NULL);
	str[size] = '\0';
		size--;
	while (n > 0)
	{
		str[size] = hex_base[n % 16];
		n /= 16;
		size--;
	}
	return (str);
}

void	ft_printhex(t_input *input, t_mod *mods)
{
	unsigned long	nbr;
	char			*str;
	// char			res_pads;

	mods->zero = 1; //DELETE!
	nbr = va_arg(input->arg, unsigned long);
	str = ft_itoa_hex(nbr, mods);
	ft_putstr(str, input);

	free(str);
	str = NULL;
}


	// res_pads = ((mods->pads - ft_strlen(str)) - 1);
	// if (res_pads > 0)
	// 	mods->pads = res_pads;
	// else
	// 	mods->pads = 0;
	// //blank padding
	// if (mods->minus == 0 && mods->width == 1)
	// {
	// 	ft_print_pads(input, mods);
	// 	ft_putstr(str, input);
	// }
	// //left adjustment with padding
	// else if (mods->minus == 1 && mods->width == 1)
	// {
	// 	ft_putstr(str, input);
	// 	ft_print_pads(input, mods);
	// }
	// //no modifiers
	// else if (mods->minus == 0 && mods->width == 0)
	// {
	// 	ft_putstr(str, input);
	// }
