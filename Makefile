# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 15:39:47 by elagouch          #+#    #+#              #
#    Updated: 2024/11/11 13:32:07 by elagouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -Wpedantic
SRC = ft_bzero.c	\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_memset.c		\
	ft_strlen.c
OBJ = $(SRC:.c=.o)

LIB=libft.a

all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all fclean re

