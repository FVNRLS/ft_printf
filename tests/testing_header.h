/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing_header.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:56:57 by rmazurit          #+#    #+#             */
/*   Updated: 2022/05/10 19:02:41 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTING_HEADER_H
# define TESTING_HEADER_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/* INIT AND PARSING*/
# include "../ft_printf.c"
# include "../ft_init_mods.c"
# include "../ft_parse.c"
# include "../ft_check_mods.c"
# include "../ft_convert.c"

/* CONVERSIONS */
# include "../ft_printchar.c"
# include "../ft_printstr.c"

/* TOOLS */
# include "../tools/ft_isdigit.c"
# include "../tools/ft_strchr.c"
# include "../tools/ft_strlen.c"
# include "../tools/ft_putstr.c"
# include "../tools/ft_print_pads.c"

#endif