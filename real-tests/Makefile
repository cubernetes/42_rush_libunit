# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tosuman <timo42@proton.me>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/03 20:40:54 by tosuman           #+#    #+#              #
#    Updated: 2024/02/03 22:26:10 by tosuman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# make -C../framework && cc -O0 -g3 -Iinclude main.c strlen_tests/*.c abs_tests/*.c -L../libft -lft -L../framework -lunit && ./a.out

NAME := tests

unexport SRC
SRC += main.c
SRC += strlen_tests/00_strlen_launcher.c
SRC += strlen_tests/01_hello_test.c
SRC += strlen_tests/02_null_test.c
SRC += strlen_tests/03_bigger_string_test.c
SRC += strlen_tests/04_nul_test.c
SRC += strlen_tests/05_newline_test.c
SRC += abs_tests/00_abs_launcher.c
SRC += abs_tests/01_pos_test.c
SRC += abs_tests/02_neg_test.c
SRC += abs_tests/03_zero_test.c
SRC += abs_tests/04_max_test.c
SRC += abs_tests/05_min_test.c
SRC += min_tests/00_min_launcher.c
SRC += min_tests/01_pos_test.c
SRC += min_tests/02_neg_test.c
SRC += min_tests/03_zero_test.c
SRC += min_tests/04_max_test.c
SRC += min_tests/05_min_test.c

OBJ = $(SRC:.o=.c)

INCLUDE := include/libft_unit_tests.h

LIBUNIT_DIR := ../framework
LIBUNIT := libunit.a
CC := cc
RM := /bin/rm -f

all: libunit $(NAME)

$(NAME): $(LIBUNIT_DIR)/$(LIBUNIT) $(OBJ)
	$(CC)

libunit:
	$(MAKE) -C $(LIBUNIT_DIR)

test: all
	./$(NAME)
