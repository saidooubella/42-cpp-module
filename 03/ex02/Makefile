
NAME=ClapTrap
FLAGS=-Wall -Wextra -Werror -std=c++98
CC=c++

INCLUDES=ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

SRCS=ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp

OBJS=$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
