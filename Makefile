##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC		=	src/main.c				\
			src/check_for_end.c     \
			src/exec_cmd.c 			\
			src/handle_direction.c  \
			src/handle_speed.c 		\
			src/verif_str.c 		\
			src/my_edited_word_array.c \

CC 		=	gcc

OBJ		=	$(SRC:.c=.o)

NAME	=	ai

CFLAGS	=	-Wall -Werror -Wshadow -Wextra  -I include/

LDFLAGS	=	-L./lib/ -lmy

MAKE 	= 	make

ECHO	=   echo -e

all:		$(NAME)

$(NAME):	$(OBJ)
			$(MAKE) -C lib/my
			$(CC) $(OBJ) $(LDFLAGS) -o $(NAME)

clean:
			$(RM) $(OBJ)
			$(MAKE) clean -C lib/my/
			$(RM) src/*.gcno
			$(RM) src/*.gcda

fclean:		clean
			$(RM) $(NAME)
			$(MAKE) fclean -C lib/my/
			rm -f lib/libmy.a

re:			fclean all

tests_run:  unit_tests
			./tests/unit_tests
			gcovr --exclude tests/
			gcovr --branches --exclude tests/

unit_tests:
			$(MAKE) -C lib/my
			$(MAKE) -C tests/

.PHONY:		fclean clean re all
