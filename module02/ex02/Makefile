CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
FILES		=	Fixed.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	run

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all