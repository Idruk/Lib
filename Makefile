NAME	=	libi.a

SRC	=	i_strlen.c	\
		i_putstr.c	\
		i_putchar.c	\
		i_strcpy.c	\
		i_strncpy.c	\
		i_strcmp.c	\
		i_strncmp.c

SRCDIR	=	i_src/

OBJ	=	$(addprefix $(SRCDIR), $(SRC:.c=.o))

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
