NAME = Zombie

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	clang++ -std=c++98 $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf .DSYM*

fclean: clean
	rm -rf $(NAME)

re :fclean all