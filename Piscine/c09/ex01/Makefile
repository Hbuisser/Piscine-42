# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbuisser <hbuisser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/23 10:07:16 by hbuisser          #+#    #+#              #
#    Updated: 2019/08/29 20:10:48 by hbuisser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCPATH = ./srcs/
SRCS = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
NAME = libft.a
HEADERS = /includes/
CFILES = $(patsubst %, $(SRCPATH)%.c, $(SRCS))
OFILES = $(patsubst %, $(SRCPATH)%.o, $(SRCS))
REM = /bin/rm -Rf

all: ${NAME}
%.o: %.c
	gcc $(CFLAGS) -c -I includes -o $@ $<
${NAME}: ${OFILES}
	ar rc libft.a ${OFILES}
	ranlib ${NAME}
clean:
	${REM} ${OFILES}
fclean: clean
	${REM} ${NAME}
re : fclean all
.PHONY:all clean fclean re
