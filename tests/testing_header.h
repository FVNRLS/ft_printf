#ifndef TESTING_HEADER_H
# define TESTING_HEADER_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/* CONVERSIONS */
# include "../conversions/ft_apply_conversions.c"
# include "../conversions/ft_convert_char.c"
# include "../conversions/ft_convert_str.c"
# include "../conversions/ft_convert_pointer.c"
# include "../conversions/ft_convert_decimal.c"
# include "../conversions/ft_convert_unsigned_int.c"
# include "../conversions/ft_convert_hex_lowercase.c"
# include "../conversions/ft_convert_hex_uppercase.c"
# include "../conversions/ft_convert_percent.c"

/* TOOLS */
# include "../tools/pf_strcpy.c"
# include "../tools/pf_strdup.c"
# include "../tools/pf_strlen.c"
# include "../tools/pf_itoa_ptr.c"
# include "../tools/pf_putstr.c"
# include "../tools/pf_get_dec_nbr.c"
# include "../tools/pf_strncpy.c"
# include "../tools/pf_strnew.c"
# include "../tools/pf_bzero.c"
# include "../tools/pf_itoa.c"
# include "../tools/pf_count_size.c"
# include "../tools/pf_itoa_unsigned_int.c"
# include "../tools/pf_calculate_hex.c"
# include "../tools/pf_putstr_hex.c"
# include "../tools/pf_to_upper.c"

#endif