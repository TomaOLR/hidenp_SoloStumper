##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Thomas Olry's Makefile made the 01/03/2020
##

SRC	=	srcs/hidenp.c			\

CC	=	gcc -o

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror  -I./include/

NAME	=	hidenp

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
