NAME = convert

SRC_FILES = main.cpp

PP = g++

PP_FLAGS = -Wall -Werror -Wextra

O_FILES = $(SRC_FILES:.cpp=.o)

$(NAME): $(O_FILES)
	@$(PP) $(PP_FLAGS) $^ -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(O_FILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
