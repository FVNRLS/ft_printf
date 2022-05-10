/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:04:38 by hoomen            #+#    #+#             */
/*   Updated: 2022/05/10 19:05:09 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define ALL_SYMBOLS	"cspdiouxX%%#-+ .*0123456789"
# define FORM_SPECS		"cspdiouxX%%"
# define FORM_MODS		"#-+ .*0123456789"

typedef struct s_mod
{
	int		zero;
	int		plus;
	int		minus;
	int		space;
	int		hash;
	int		width;
	int		precision;
	
	char	spec; //format spec
	
	int		pads;
}			t_mod;

typedef struct s_input
{
	const char	*format;
	va_list		arg;
	size_t		ret_nbr;
	size_t		pos;
}				t_input;

//INIT AND PARSING
int		ft_printf(const char *format, ...);
void	ft_init_mods(t_mod *mods);
void	ft_parse(t_input *input, t_mod *mods);
void	ft_check_mods(t_input *input, t_mod *mods);

//CONVERSIONS
void	ft_convert(t_input *input, t_mod *mods);
void	ft_printchar(t_input *input, t_mod *mods);
void	ft_printstr(t_input *input, t_mod *mods);

//TOOLS
int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void	ft_putstr(char *str, t_input *input);
void	ft_print_pads(t_input *input, t_mod *mods);
void	ft_print_zeropads(t_input *input, t_mod *mods);

#endif
