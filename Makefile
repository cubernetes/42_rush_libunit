# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tosuman <timo42@proton.me>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 19:36:56 by tosuman           #+#    #+#              #
#    Updated: 2024/02/02 19:41:03 by tosuman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := main

SRC = main.c
OBJ = main.o
LIBFT = libft.a

INCLUDE = ./include
LIBFT_DIR = ./libft

CC = cc
RM = /bin/rm -f

LDFLAGS = -Llibft
LDLIBS = -lft

all: $(NAME)

$(NAME): $(LIBFT_DIR)/$(LIBFT) $(OBJ)
	$(CC) -o $@ $(LDFLAGS) $(OBJ) $(LDLIBS)

$(LIBFT_DIR)/$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c $(INCLUDE)

clean:
	$(MAKE) -C $(LIBFT_DIR) $@
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) $@
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
