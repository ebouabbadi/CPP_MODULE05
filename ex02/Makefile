NAME = bureaucrat

SRC = main.cpp Bureaucrat.cpp Form.cpp \
		ShrubberyCreationForm.cpp \
		 RobotomyRequestForm.cpp \
		  PresidentialPardonForm.cpp
OBJ = $(SRC:.cpp=.o)

CPP = c++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp Bureaucrat.hpp Form.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp  PresidentialPardonForm.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all