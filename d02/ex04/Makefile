# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etranchi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/07 11:54:28 by etranchi          #+#    #+#              #
#    Updated: 2019/01/07 11:54:30 by etranchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC_FILES = Fixed.cpp\
			main.cpp

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
