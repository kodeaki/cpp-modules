
NAME			:= replacestr

COMPILER		:= c++

COMPILER_FLAGS	:= -Wall -Wextra -Werror -std=c++17

SRC				:= main.cpp

OBJ				:= $(SRC:.cpp=.o)

all: $(NAME)
	@echo -e "\nUse \"make test\" to run tests"

$(NAME): $(OBJ)
	$(COMPILER) $(COMPILER_FLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(COMPILER) $(COMPILER_FLAGS) -c $< -o $@

test:
	echo -e "testing string\n" > test
	./replacestr "test" "string" "replaced"
	cat test.replace ; echo
	echo -e "string string string\n" > test
	./replacestr "test" "string" "test two"
	cat test.replace ; echo
	echo -e "abcdefgihjklmnopqrstuvwxyz\n" > test
	./replacestr "test" "q" "whydoiexist"
	cat test.replace ; echo
	rm test
	rm test.replace

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
