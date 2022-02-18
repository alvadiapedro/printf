# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 14:40:35 by pmiranda          #+#    #+#              #
#    Updated: 2022/02/16 16:33:09 by pmiranda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= gcc -Wall -Werror -Wextra

NAME=libftprintf.a

SRC=ft_printf.c ft_putchar.c ft_putint.c ft_putstr.c ft_putunsint.c ft_spec.c

OBJ=$(SRC:.c=.o)

LIBFT=libft

HEAD=ft_printf.h

all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
