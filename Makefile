##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile code source
##

SRC = 	src/main.c 							\
		src/inverted_deminer_algorithm.c	\
		src/free_map.c						\
		src/get_len_rows_and_lines.c		\
		src/init_map.c						\
		src/map_manager.c

NAME = bsq

OBJ = $(SRC:.c=.o)

LDFLAGS = -L lib/my -lmy

CPPFLAGS = -I./include

CFLAGS = -g3

all: built $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(CFLAGS)

clean :
	rm -f $(OBJ)
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all

built:
	rm -f lib/my/libmy.a
	gcc -c lib/my/fonctions/*.c
	ar rc lib/my/libmy.a *o

.PHONY: all clean fclean re built