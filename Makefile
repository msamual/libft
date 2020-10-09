NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror -std=c99
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_strcat.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c \
ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_strstr.c \
ft_tolower.c ft_toupper.c ft_strncat.c ft_memalloc.c ft_memdel.c ft_strnew.c \
ft_strdel.c ft_strclr.c ft_striter.c ft_strmap.c ft_strmapi.c ft_strequ.c \
ft_strnequ.c ft_strsub.c
OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME);

re: clean fclean all
