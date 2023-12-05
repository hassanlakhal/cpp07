# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 18:08:53 by hlakhal-          #+#    #+#              #
#    Updated: 2023/12/05 18:38:23 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = Array.cpp main.cpp
CXXFLAGS = -Wall -Wextra -Werror

NAMEFILE = *_shrubbery

CXX = c++ -std=c++98 

all:$(NAME)

OBJ = $(SRC:.cpp=.o)


$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ) 
	
fclean:clean
	rm -rf $(NAME) 

rmfiles:
	rm -rf $(NAMEFILE) $(OBJ)
	
re: fclean all
	