# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 17:29:32 by rmazurit          #+#    #+#              #
#    Updated: 2022/05/12 15:18:43 by rmazurit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 		libftprintf.a

CC 		= 		gcc

FLAGS	= 		-Wall -Wextra -Werror

SRC 	= 		ft_printf.c 				\
				ft_init_mods.c				\
				ft_parse.c					\
				ft_check_mods.c				\
				ft_convert.c 				\
				ft_printchar.c				\
				ft_printstr.c				\
				ft_printint.c				\
				ft_printptr.c				\
				ft_printhex.c				\
				ft_print_uint.c				\
				./tools/ft_isdigit.c		\
				./tools/ft_strlen.c			\
				./tools/ft_strchr.c			\
				./tools/ft_putstr.c			\
				./tools/ft_print_pads.c		\
				./tools/ft_itoa_dec.c		\
				./tools/ft_arg_is_last.c	\
				./tools/ft_itoa_ptr.c		\
				./tools/ft_itoa_hex.c		\
				./tools/ft_itoa_uint.c		\
				
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
	rm -f ./libft/*.o
	rm -f $(NAME)

re: fclean $(NAME)

bonus: re

.PHONY: all clean fclean re bonus
