NAME	=	libi.a

SRC	=	i_src/i_strlen.c	\
		i_src/i_putstr.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I./i_include

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
