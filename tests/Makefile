# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tosuman <timo42@proton.me>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/04 20:14:25 by tosuman           #+#    #+#              #
#    Updated: 2024/02/04 21:33:02 by tosuman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := tests

unexport SRC
SRC += main.c
SRC += signal_tests/00_signal_launcher.c
SRC += signal_tests/01_segv_test.c
SRC += signal_tests/02_ok_test.c
SRC += signal_tests/03_ko_test.c
SRC += signal_tests/04_buserror_test.c

vpath %.c signal_tests

OBJDIR := ./obj

OBJ := $(SRC:.c=.o)

INCLUDE := include/bonus_tests.h

LIBFT_DIR := ../libft
LIBFT := libft.a
LIBUNIT_DIR := ../framework
LIBUNIT := libunit.a

CC := gcc
RM := /bin/rm -f
MKDIR := /bin/mkdir -f

CFLAGS := -Wall -Wextra -Werror -O0 -std=c89 -pedantic -Wconversion -Wshadow

all: libs $(NAME)

$(NAME): libs $(OBJ)
	$(CC) -o $@ $(OBJ) $(LIBFT_DIR)/$(LIBFT) $(LIBUNIT_DIR)/$(LIBUNIT)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) -o $@ $(CFLAGS) $(CPPFLAGS) -c $<

$(OBJDIR):
	$(MKDIR) $@

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
	$(RM) -r $(OBJDIR)

fclean: clean
	$(MAKE) -C $(LIBUNIT_DIR) $@
	$(MAKE) -C $(LIBFT_DIR) $@
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test libs libunit libft
