CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
FILES		=	BitcoinExchange.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	btc

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all