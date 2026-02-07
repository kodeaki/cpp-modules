

NAME			:= brainz

COMPILER		:= c++

COMPILER_FLAGS	:= -Wall -Wextra -Werror -std=c++17

SRC				:= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ				:= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(COMPILER_FLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(COMPILER) $(COMPILER_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
