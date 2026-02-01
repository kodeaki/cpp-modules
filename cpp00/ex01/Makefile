

NAME			:= phonebook

COMPILER		:= c++

COMPILER_FLAGS	:= -Wall -Wextra -Werror -std=c++17

SRCS			:= phonebook.cpp contact.cpp

OBJS			:= $(SRCS=.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(COMPILER_FLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(OBJS)

fclean:	clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
