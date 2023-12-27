CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
FILES		=	Serializer.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	serializer

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all