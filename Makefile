##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make
##

SRC		=	src/init_match_struct.c\
			src/set_ss_bound.c\
			src/set_matches.c\
			src/print_tab.c\
			src/error_cases.c\
			src/is_empty.c\
			src/matchsticks.c\
			src/remove_line_matches.c\
			src/error_line.c\
			src/line_set_loop.c\
			src/usage.c\
			src/error_matches.c\
			src/set_match_loop.c\
			src/player_turn.c\
			src/AI_turn.c\

SRC_M	=	src/main.c

SRC_UT	=	tests/*.c

OBJ		=	$(SRC:.c=.o)

OBJ_M	=	$(SRC_M:.c=.o)

OBJ_UT	=	$(SRC_UT:.c=.o)

INCLUDE	=	-I./include -I../include -I../../include

NAME	=	matchSticks

NAME_UT	=	unit_tests

CFLAGS	=	-W -Werror -Wall -Wextra -I./include

CFLAGS_UT	=	-lcriterion --coverage -lgcov

LIB		=	-L lib/ -lmy

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ_M) $(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) $(OBJ_M) $(INCLUDE) $(CFLAGS) $(LIB)

tests_run:	$(OBJ) $(OBJ_UT)
		make -C lib/my/
		gcc -o $(NAME_UT) $(SRC) $(SRC_UT) $(INCLUDE) $(CFLAGS_UT) $(LIB)
		./$(NAME_UT)
		gcovr -e tests

clean:
		$(RM) $(OBJ) $(OBJ_M) lib/my/*.o lib/libmy.a lib/my/libmy.a *gcno *gcda *~

fclean:		clean fclean_ut
		$(RM) $(NAME) tests/*.o

fclean_ut: clean
		$(RM) $(NAME_UT)

re:		fclean all