CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
FILE		=	megaphone.cpp
OBJ			=	$(FILE:.cpp=.o)
NAME		=	megaphone

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all

