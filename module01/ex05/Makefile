CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
FILES		=	Harl.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	harl

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all