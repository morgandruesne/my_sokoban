##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile day13
##

SRC	=	main.c		\
		move.c		\
		fonction.c	\
		get_files.c	\
		check_lose1.c	\
		check_lose2.c	\
		move_map2.c	\
		display.c	\
		check.c		\
		got.c		\

CC	=	gcc

CFLAGS	=	-g -W -Wall -Wextra -I./include

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(CFLAGS) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
