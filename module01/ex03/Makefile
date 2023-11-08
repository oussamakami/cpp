CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
FILES		=	Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	violence

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all