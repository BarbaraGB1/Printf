# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 19:27:56 by bargarci          #+#    #+#              #
#    Updated: 2023/04/18 15:42:42 by bargarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

COMPILE = ${CC} ${CFLAGS}

SRC = ft_printf.c 

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
