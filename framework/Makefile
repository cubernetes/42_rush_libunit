# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tosuman <timo42@proton.me>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 19:36:56 by tosuman           #+#    #+#              #
#    Updated: 2024/02/03 20:52:18 by tosuman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libunit.a

LIBFT_DIR := ../libft

SRC := libunit.c
OBJ := libunit.o
LIBFT := libft.a

AR := ar rcs
CC := cc
RM := /bin/rm -f
CP := /bin/cp -f

CFLAGS := -O0 -g3 -Wall -Wextra -Werror -std=c89 -pedantic -Wconversion

all: libft $(NAME)

$(NAME): $(LIBFT_DIR)/$(LIBFT) $(OBJ)
	$(CP) $(LIBFT_DIR)/$(LIBFT) $@
	$(AR) $@ $^

%.o: %.c libunit.h
	$(CC) $(CFLAGS) -c $< -o $@

libft:
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) $@
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) $@
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all libft
