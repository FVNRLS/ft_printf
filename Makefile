# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 13:52:03 by rmazurit          #+#    #+#              #
#    Updated: 2022/05/06 13:52:06 by rmazurit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# compiler variables
CC		=	cc
FLAGS 	=	-Wall -Wextra -Werror
# file variables
NAME	= libftprintf.a
MAIN	= printf initmodifiers parse modifiers convert printchar pad printstr printint printnbr putnbrpf
LIBFT	= isdigit strlen strchr
HEADER	= ft_printf.h
MAINFILES	= $(addprefix ft_,$(addsuffix .c, $(MAIN)))
LIBFTFILES	= $(addprefix libft/ft_,$(addsuffix .c, $(LIBFT)))
MAINOBJS	= $(MAINFILES:.c=.o)
LIBFTOBJS	= $(LIBFTFILES:.c=.o)

all : $(NAME) clean

$(NAME): $(MAINOBJS) $(LIBFTOBJS)
	@ar rc $(NAME) $(MAINOBJS) $(LIBFTOBJS)

%.o: %.c $(HEADER)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o
	rm -f libft/*.o

bonus: re

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
