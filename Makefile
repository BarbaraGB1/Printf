# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 19:27:56 by bargarci          #+#    #+#              #
#    Updated: 2023/06/09 02:08:46 by bargarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

COMPILE = ${CC} ${CFLAGS}

SRC = ft_printf.c ft_printf_utils.c ft_put_hex.c ft_putnbr_unsigned.c ft_putnbr.c ft_putptr.c 

OBJ = ${SRC:%.c=%.o} 

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}


%.o:%.c	
	$(COMPILE) -c $< -o $@

# Cleaning

clean:
	@echo Limpiando los .o ...
	@rm -f ${OBJ} 
	@echo OK

fclean: clean
	@rm -f ${NAME}
re: fclean all

.PHONY: all  clean fclean re
