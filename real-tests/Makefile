# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tosuman <timo42@proton.me>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/03 20:40:54 by tosuman           #+#    #+#              #
#    Updated: 2024/02/05 21:23:59 by tosuman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := tests

unexport SRC
SRC += main.c

SRC += strlen_tests/00_strlen_launcher.c
SRC += strlen_tests/01_strlen_hello_test.c
SRC += strlen_tests/02_strlen_null_test.c
SRC += strlen_tests/03_strlen_bigger_string_test.c
SRC += strlen_tests/04_strlen_zero_test.c
SRC += strlen_tests/05_strlen_newline_test.c

SRC += abs_tests/00_abs_launcher.c
SRC += abs_tests/01_abs_pos_test.c
SRC += abs_tests/02_abs_neg_test.c
SRC += abs_tests/03_abs_zero_test.c
SRC += abs_tests/04_abs_max_test.c
SRC += abs_tests/05_abs_min_test.c

SRC += min_tests/00_min_launcher.c
SRC += min_tests/01_min_pos_test.c
SRC += min_tests/02_min_neg_test.c
SRC += min_tests/03_min_zero_test.c
SRC += min_tests/04_min_max_test.c
SRC += min_tests/05_min_min_test.c

SRC += atoi_tests/03_atoi_zero_test.c
SRC += atoi_tests/05_atoi_min_test.c
SRC += atoi_tests/02_atoi_neg_test.c
SRC += atoi_tests/00_atoi_launcher.c
SRC += atoi_tests/01_atoi_pos_test.c
SRC += atoi_tests/04_atoi_max_test.c

SRC += isascii_tests/03_isascii_space_test.c
SRC += isascii_tests/04_isascii_null_test.c
SRC += isascii_tests/01_isascii_char_test.c
SRC += isascii_tests/00_isascii_launcher.c
SRC += isascii_tests/02_isascii_num_test.c
SRC += isascii_tests/05_isascii_nonascii_test.c

SRC += isdigit_tests/04_isdigit_null_test.c
SRC += isdigit_tests/02_isdigit_num_test.c
SRC += isdigit_tests/01_isdigit_char_test.c
SRC += isdigit_tests/03_isdigit_space_test.c
SRC += isdigit_tests/00_isdigit_launcher.c

SRC += putchar_tests/00_putchar_launcher.c
SRC += putchar_tests/01_putchar_a_test.c
SRC += putchar_tests/02_putchar_b_test.c
SRC += putchar_tests/03_putchar_zero_test.c
SRC += putchar_tests/04_putchar_127_test.c
SRC += putchar_tests/05_putchar_nl_test.c

SRC += printf_tests/00_printf_launcher.c
SRC += printf_tests/01_printf_hello_world_test.c
SRC += printf_tests/02_printf_hello_world_nl_test.c
SRC += printf_tests/03_printf_big_string_test.c
SRC += printf_tests/04_printf_fmt_s_test.c
SRC += printf_tests/05_printf_fmt_d_test.c
SRC += printf_tests/06_printf_fmt_p_test.c
SRC += printf_tests/07_printf_fmt_X_test.c

vpath %.c strlen_tests abs_tests min_tests isdigit_tests isascii_tests atoi_tests

OBJ := $(SRC:.c=.o)

INCLUDE := include/libft_unit_tests.h

LIBFT_DIR := ../libft
LIBFT := libft.a
LIBUNIT_DIR := ../framework_bonus
LIBUNIT := libunit.a

CC := gcc
RM := /bin/rm -f
MKDIR := /bin/mkdir -f

CFLAGS := -Wall -Wextra -Werror -O0 -pedantic -Wconversion -Wshadow

all: libs $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $(OBJ) $(LIBFT_DIR)/$(LIBFT) $(LIBUNIT_DIR)/$(LIBUNIT)

%.o: %.c
	$(CC) -o $@ $(CFLAGS) $(CPPFLAGS) -c $<

libs: libft libunit
libft:
	$(MAKE) -C $(LIBFT_DIR)
libunit:
	$(MAKE) -C $(LIBUNIT_DIR)

test: all
	./$(NAME)

clean:
	$(MAKE) -C $(LIBUNIT_DIR) $@
	$(MAKE) -C $(LIBFT_DIR) $@
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBUNIT_DIR) $@
	$(MAKE) -C $(LIBFT_DIR) $@
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test libs libunit libft
