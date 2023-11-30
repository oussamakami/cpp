CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
FILES		=	Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp\
				RobotomyRequestForm.cpp PresidentialPardonForm.cpp main.cpp
OBJ			=	$(FILES:.cpp=.o)
NAME		=	run

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all