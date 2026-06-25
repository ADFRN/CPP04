# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afournie <afournie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/05 16:54:28 by afournie          #+#    #+#              #
#    Updated: 2026/06/24 13:04:26 by afournie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR		= .
OBJ_DIR		= obj

SRC			=	AAnimal.cpp 	\
				Cat.cpp			\
				Dog.cpp			\
				main.cpp		\
				Brain.cpp

INC			=	AAnimal.hpp 	\
				Cat.hpp			\
				Dog.hpp			\
				Brain.hpp

OBJ			= $(SRC:%.cpp=$(OBJ_DIR)/%.o)

CC			= c++
CFLAGS		= -std=c++98 -Wall -Wextra -Werror

RM			= rm -rf

NAME		= Abstract

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
