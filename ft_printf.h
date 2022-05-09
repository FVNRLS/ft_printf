/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:04:38 by hoomen            #+#    #+#             */
/*   Updated: 2022/05/09 13:02:48 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "tools.h"

# define ALL_SYMBOLS	"cspdiouxX%%#-+ .*0123456789"
# define FORM_SPECS		"cspdiouxX%%"
# define FORM_MODS		"#-+ .*0123456789"

typedef struct s_mod
{
	int		altform;
	int		zeropad;
	int		adj_left;
	int		space;
	int		plus;
	int		width;
	int		precision;
	int		adj_precision;
	char	conspec;
	int		base;
	int		putminus;
	int		pads;
}			t_mod;

typedef struct s_input
{
	const char	*format;
	va_list		arg;
	size_t		ret_nbr;
	size_t		pos;
}				t_input;

int		ft_printf(const char *format, ...);
void	ft_init_mods(t_mod *mods);
void	ft_parse(t_input *input, t_mod *mods);
void	ft_convert(t_input *input, t_mod *mods);

#endif
