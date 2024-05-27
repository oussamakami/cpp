CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
FILES		=	RPN.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	RPN

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all