NAME = replace

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	clang++ -std=c++98 $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf *.DSYM
	rm -rf *.replace

fclean: clean
	rm -rf $(NAME)

re :fclean all