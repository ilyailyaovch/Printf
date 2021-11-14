# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleoma <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 16:09:53 by pleoma            #+#    #+#              #
#    Updated: 2021/10/20 16:09:53 by pleoma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

LIB = libft/libft.a
HEADER = includes/ft_printf.h
OBJ = $(patsubst %.c,%.o,$(SRC))
SRC =	src/ft_putchar_l.c			src/ft_printf.c\
		src/ft_putstr_l.c\
		src/ft_putnbr_l.c\
		src/ft_putnbr_unsigned_l.c\
		src/ft_puthex_l.c\
		src/ft_putpointer_l.c\

.c.o:
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "Compiling $<"

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@echo "Compiling libft"
	@make -C libft
	@cp $(LIB) $(NAME)
	@echo "Copying libft in libftprintf"
	@ar rcs $(NAME) $?
	@echo "Creating a $@"

clean:
	@rm -f $(OBJ)
	@echo "Removing obj"
	@make clean -C libft
	@echo "Removing obj in libft"

fclean: clean
	@rm  -f $(NAME)
	@echo "Removing all"
	@make fclean -C libft
	@echo "Removing all in libft"

re:	fclean all

.PHONY: all clean fclean re