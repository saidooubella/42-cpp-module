
NAME=Bureaucrat
FLAGS=-Wall -Wextra -Werror -std=c++98 -g
CC=c++

INCLUDES=Bureaucrat.hpp Form.hpp

SRCS=Bureaucrat.cpp Form.cpp main.cpp

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
