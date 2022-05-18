/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing_header.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:56:57 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/18 18:29:29 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTING_HEADER_H
# define TESTING_HEADER_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/* INIT AND PARSING*/
# include "../ft_printf.c"
# include "../ft_parse_convert.c"
# include "../ft_check_mods.c"

/* CONVERSIONS */
# include "../ft_printchar.c"
# include "../ft_printstr.c"
# include "../ft_printint.c"
# include "../ft_printptr.c"
# include "../ft_printhex.c"
# include "../ft_print_uint.c"

/* TOOLS */
# include "../tools/ft_isdigit.c"
# include "../tools/ft_strchr.c"
# include "../tools/ft_strlen.c"
# include "../tools/ft_putstr.c"
# include "../tools/ft_print_pads.c"
# include "../tools/ft_itoa_dec.c"
# include "../tools/ft_arg_is_last.c"
# include "../tools/ft_itoa_ptr.c"
# include "../tools/ft_itoa_hex.c"
# include "../tools/ft_itoa_uint.c"
# include "../tools/ft_apply_mods.c"
# include "../tools/ft_apply_prefix.c"

#endif