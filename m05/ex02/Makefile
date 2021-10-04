NAME = Tree

SRCS = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	clang++ -std=c++98 $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf .DSYM*

fclean: clean
	rm -rf $(NAME)

re :fclean all