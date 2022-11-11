NAME = libftprintf.a


SOURCES = \
			ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c \
			test.c ft_strchr.c


OBJ = $(SOURCES:.c=.o)


CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $?


%.o: %.c ft_printf.h
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re