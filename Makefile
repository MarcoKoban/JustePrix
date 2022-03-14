##
## EPITECH PROJECT, 2021
## delivery
## File description:
## Makefile
##

SRC	=	sources/justeprix.c	\
		sources/my_lib.c	\
		sources/my_lib2.c	\
		sources/utils.c	\
		sources/error.c	\


OBJ =	$(SRC:.c=.o)

NAME	=	justeprix

all:	$(NAME)

$(NAME):	$(SRC)
			gcc -o $(NAME) $(SRC) -I include/ $(FLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~*

fclean:	clean
	rm -f $(NAME)

re:	fclean all
