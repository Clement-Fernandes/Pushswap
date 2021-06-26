##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## printf
##

SRC	=	call.c				\
		flags_print.c		\
		my_flag_b.c			\
		my_flag_o.c			\
		my_flag_s_maj.c		\
		my_flag_u.c			\
		my_flag_x_maj.c		\
		my_flag_x_min.c		\
		my_getnbr.c			\
		my_printf.c			\
		my_put_nbr.c		\
		my_putchar.c		\
		my_putstr.c			\
		my_strlen.c			\
		porcent_flag.c		\
		space_flag.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

libmy:		$(OBJ)
	ar  rc libmy.a *.o
	cp libmy.a ../libmy.a

includemy:
	cp libmy.a ../../include/my.h

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)