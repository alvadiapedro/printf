CC=gcc -Wall -Werror -Wextra

NAME=libft.a

SRC=ft_isdigit.c ft_lstiter.c ft_memcpy.c ft_split.c ft_strcpy.c ft_strlcpy.c ft_substr.c \
ft_atoi.c ft_isprint.c ft_lstlast.c	ft_memmove.c ft_strchr.c ft_strlen.c ft_tolower.c \
ft_bzero.c ft_itoa.c ft_lstmap.c ft_memset.c ft_strcpy.c ft_strmapi.c ft_toupper.c \
ft_calloc.c	ft_lstadd_back.c ft_lstnew.c ft_putchar_fd.c ft_strdup.c ft_strncmp.c \
ft_isalnum.c ft_lstadd_front.c ft_lstsize.c	ft_putendl_fd.c	ft_striteri.c ft_strnstr.c \
ft_isalpha.c ft_lstclear.c ft_memchr.c ft_putnbr_fd.c ft_strjoin.c ft_strrchr.c \
ft_isascii.c ft_lstdelone.c ft_memcmp.c ft_putstr_fd.c ft_strlcat.c	ft_strtrim.c \

SRC_BONUS= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c	

OBJECTS=$(SRC:.c=.o)

OBJ_BONUS=$(SRC_BONUS:.c=.o)

HEADERS=libft.h 

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

clean:
	rm -f $(OBJECTS) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
