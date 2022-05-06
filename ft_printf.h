/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:04:38 by hoomen            #+#    #+#             */
/*   Updated: 2022/05/06 13:51:03 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_mod
{
	int		altform;
	int		zeropad;
	int		leftadj;
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

typedef struct s_io
{
	const char	*format;
	va_list		ap;
	size_t		nprinted;
	size_t		pos;
}				t_io;

int		ft_printf(const char *format, ...);
void	ft_initmods(t_mod *mods);
void	ft_parse(t_io *io, t_mod *mods);
void	ft_modifiers(t_io *io, t_mod *mods);
void	ft_convert(t_io *io, t_mod *mods);
void	ft_printchar(t_io *io, t_mod *mods);
void	ft_pad(t_io *io, t_mod *mods);
void	ft_printstr(t_io *io, t_mod *mods);
void	ft_printint(t_io *io, t_mod *mods);
void	ft_printnbr(t_io *io, t_mod *mods, unsigned long int nbr);
void	ft_putnbrpf(t_io *io, t_mod *mods, unsigned long int nbr);

#endif
