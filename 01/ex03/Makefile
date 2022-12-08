
NAME=NeedlessViolence
FLAGS=-Wall -Wextra -Werror -std=c++98
CC=c++

INCLUDES=HumanA.hpp HumanB.hpp Weapon.hpp

SRCS=HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

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
