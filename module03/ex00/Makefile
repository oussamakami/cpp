CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
FILES		=	ClapTrap.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	claptrap

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all