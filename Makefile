# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 17:29:32 by rmazurit          #+#    #+#              #
#    Updated: 2022/05/01 18:13:37 by rmazurit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 		libftprintf.a

CC 		= 		gcc

FLAGS	= 		-Wall -Wextra -Werror -g3

SRC 	= 		ft_printf.c \
				./conversions/ft_apply_conversions.c \
				./conversions/ft_convert_char.c \
				./conversions/ft_convert_decimal.c \
				./conversions/ft_convert_hex_lowercase.c \
				./conversions/ft_convert_hex_uppercase.c \
				./conversions/ft_convert_percent.c \
				./conversions/ft_convert_pointer.c \
				./conversions/ft_convert_str.c \
				./conversions/ft_convert_unsigned_int.c \
				./tools/pf_bzero.c \
				./tools/pf_calculate_hex.c \
				./tools/pf_get_dec_nbr.c \
				./tools/pf_itoa_ptr.c \
				./tools/pf_itoa_unsigned_int.c \
				./tools/pf_itoa.c \
				./tools/pf_putstr_hex.c \
				./tools/pf_putstr.c \
				./tools/pf_strcpy.c \
				./tools/pf_strdup.c \
				./tools/pf_strlen.c \
				./tools/pf_strncpy.c \
				./tools/pf_strnew.c \
				./tools/pf_to_upper.c \
				./tools/pf_update_return.c \
				./tools/pf_count_size.c \

all: $(NAME)

$(NAME): *.c
	Make -C ./libft
	cp ./libft/libft.a $(NAME)
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o

clean:
	rm -f ./libft/*.o
	rm -f *.o

fclean: clean
	rm -f ./libft/libft.a
	rm -f $(NAME)

re: fclean $(NAME)