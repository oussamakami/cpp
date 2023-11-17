CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
FILES		=	ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	fragtrap

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all