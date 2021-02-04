##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make
##

SRC		=	my_putchar.c\
			my_putstr.c\
			my_strlen.c\
			my_getnbr.c\
			my_put_nbr.c\
			my_str_to_word_array.c\
			my_strdup.c\
			my_strcmp.c\
			my_strcpy.c\
			my_printf.c\
			print_hex_convert.c\
			print_oct_convert.c\

OBJ		=	$(SRC:.c=.o)

INCLUDE	=	-I../../include

NAME	=	test

NAME_L	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
			ar -rc $(NAME_L) $(OBJ)
			cp $(NAME_L) ../

clean:
		$(RM) $(OBJ)