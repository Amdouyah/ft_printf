# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 02:09:22 by amdouyah          #+#    #+#              #
#    Updated: 2022/11/04 16:33:21 by amdouyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_puthex.c \
	  ft_putnbr.c \
	  ft_putnbru.c \
	  ft_putstr.c 
	  
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		ar -rc $@ $^
		
clean :
	rm -rf *.o
fclean :	clean
	rm -rf libftprintf.a
re : fclean all