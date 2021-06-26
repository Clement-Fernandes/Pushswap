##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## pushswap
##

SRC =	lists/list_first.c	\
		lists/list_second.c	\
		lists/list_third.c	\
		files/main.c		\
		files/print_swaps.c	\
		files/pushswap.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include

LDFLAGS	=	-L./lib/ -lmy -g

NAME	=	push_swap

all:	 $(NAME)

$(NAME):	$(OBJ)
	@make -sC lib/my
	@gcc -o $(NAME) -Wall -Wextra $(OBJ) $(CFLAGS) $(LDFLAGS)
	@tput setaf 5; cat include/signature; tput sgr0

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	make fclean -sC lib/my
	clear

re:	fclean all

.PHONY: clean fclean re all tests_run