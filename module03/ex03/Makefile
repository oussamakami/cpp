CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wno-shadow
FILES		=	ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	diamondtrap

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all