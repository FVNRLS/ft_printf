#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/* CORE FUNCTIONS */
int 	ft_printf(const char *format, ...);

/* CONVERSIONS */
int				ft_apply_conversions(const char *format, va_list arg, int pos);
int				ft_convert_char(va_list arg);
int				ft_convert_str(va_list arg);
int				ft_convert_pointer(va_list arg);
int				ft_convert_decimal(va_list arg);
int				ft_convert_unsigned_int(va_list arg);
int				ft_convert_hex_lowercase(va_list arg);
int				ft_convert_hex_uppercase(va_list arg);
int				ft_convert_percent(void);

/* TOOLS */
char			*pf_strcpy(char *s1, const char *s2);
char			*pf_strdup(const char *s1);
size_t			pf_strlen(const char *s);
void			pf_putstr(char *str);
void			pf_bzero(void *s, size_t n);
unsigned long	pf_itoa_ptr(unsigned long input);
char			*pf_strncpy(char *s1, const char *s2, size_t n);
char			*pf_strnew(size_t size);
uint64_t		pf_get_dec_nbr(uint64_t num);
char			*pf_itoa(int n);
char			*pf_itoa_unsigned_int(uint64_t	input);
char			*pf_calculate_hex(uint64_t input);
void			pf_putstr_hex(char *str, int uppercase);
void			pf_to_upper(char *str);
int				pf_update_return(const char *str, int i);
size_t			pf_count_size(int n);

#endif