# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elagouch <elagouch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 15:39:47 by elagouch          #+#    #+#              #
#    Updated: 2024/11/11 18:50:59 by elagouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -Wpedantic
SRC = ft_atoi.c		\
	ft_bzero.c		\
	ft_calloc.c		\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_memset.c		\
	ft_strdup.c		\
	ft_strrchr.c	\
	ft_strchr.c		\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c		\
	ft_strnstr.c	\
	ft_strncmp.c	\
	ft_tolower.c	\
	ft_toupper.c
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

