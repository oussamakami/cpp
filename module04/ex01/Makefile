CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
FILES		=	Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	polymorphism

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all