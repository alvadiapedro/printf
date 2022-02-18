# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 14:40:35 by pmiranda          #+#    #+#              #
#    Updated: 2022/02/18 12:00:06 by pmiranda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= gcc -Wall -Werror -Wextra

NAME=libftprintf.a

SRC=ft_printf.c ft_putchar.c ft_putint.c ft_putstr.c ft_putunsint.c ft_spec.c \
	ft_putptr.c ft_puthex.c

OBJ=$(SRC:.c=.o)

LIBFT=libft

HEADS=ft_printf.h -L./libft -lft

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	cp libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJ)

.o.c:
	$(CC) -I $(HEADS) -o $@ -c $<

clean:
	rm -rf $(OBJ)
	make clean -C $(LIBFT)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(LIBFT)

re: fclean all

.PHONY: all bonus clean fclean re
