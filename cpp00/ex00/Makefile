

NAME := megaphone

COMPILER := c++
COMPILER_FLAGS := -Wall -Wextra -Werror -std=c++17

SRC := megaphone.cpp
OBJ := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(COMPILER_FLAGS) $(OBJ) -o $(NAME)

clean:
	rm megaphone.o

fclean:
	rm megaphone
