

NAME			:= phonebook

COMPILER		:= c++

COMPILER_FLAGS	:= -Wall -Wextra -Werror -std=c++17

SRCS			:= PhoneBook.cpp Contact.cpp main.cpp

OBJS			:= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(COMPILER_FLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(COMPILER) $(COMPILER_FLAGS) -c $< -o $@

clean:
	rm $(OBJS)

fclean:	clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
