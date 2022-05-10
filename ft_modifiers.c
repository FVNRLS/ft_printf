/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mods.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoomen <hoomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:05:05 by hoomen            #+#    #+#             */
/*   Updated: 2022/04/19 16:56:15 by hoomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_zeroisflag(t_input *input)
{
	int	i;

	i = 1;
	while (input->format[input->pos - i] == '0')
		i++;
	//if the element before 0 is . then its a precision!
	if (ft_isdigit(input->format[input->pos - i]) 
		|| input->format[input-> pos - i] == '.') 
		return (0);
	return (1); //otherwise its a flag
}

static void	ft_adj_width(t_input *input, t_mod *mods)
{
	//if * found in arg, then change 
	if (input->format[input->pos] == '*')
		mods->width = va_arg(input->arg, int); 
	else if (input->format[input->pos - 1] == '0' && ft_zeroisflag(input))
		mods->width = input->format[input->pos] - '0';
	else if (!ft_isdigit(input->format[input->pos - 1]))
		mods->width = input->format[input->pos] - '0';
	else
		mods->width = (mods->width * 10) + (input->format[input->pos] - '0');
}

static void	ft_adj_precision(t_input *input, t_mod *mods)
{
	if (input->format[input->pos] == '*')
	{
		mods->precision = va_arg(input->arg, int);
		mods->adj_precision = 0;
		return ;
	}
	else if (!ft_isdigit(input->format[input->pos - 1]))
		mods->precision = input->format[input->pos] - '0';
	else
		mods->precision = (mods->precision * 10) + (input->format[input->pos] - '0');
	if (!ft_isdigit(input->format[input->pos + 1]))
		mods->adj_precision = 0;
}

/*Example Zeropad: If you use "%02d" (useful for dates) this would only 
pad zeros for numbers in the ones column. E.g., 06 instead of 6.*/
void	ft_check_mods(t_input *input, t_mod *mods)
{
	if (input->format[input->pos] == '0' && ft_zeroisflag(input) == 1)
		mods->zeropad = 1;
	else if (ft_isdigit(input->format[input->pos]) && !mods->adj_precision)
		ft_adj_width(input, mods);
	else if (ft_isdigit(input->format[input->pos]))
		ft_adj_precision(input, mods);
	else if (input->format[input->pos] == '*' && !mods->adj_precision)
		ft_adj_width(input, mods);
	else if (input->format[input->pos] == '*')
		ft_adj_precision(input, mods);
	else if (input->format[input->pos] == '+')
		mods->plus = 1;
	else if (input->format[input->pos] == '-')
		mods->adj_left = 1;
	else if (input->format[input->pos] == ' ')
		mods->space = 1;
	else if (input->format[input->pos] == '#')
		mods->altform = 1;
	else if (input->format[input->pos] == '.')
	{
		mods->precision = 0;
		if (ft_isdigit(input->format[input->pos + 1]))
			mods->adj_precision = 1;
	}
}
