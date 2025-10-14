# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 13:30:08 by rcochran          #+#    #+#              #
#    Updated: 2025/10/13 13:35:00 by rcochran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY : all clean fclean re

CC			= 	c++
CFLAGS		=	-Wall -Werror -Wextra -Wno-unused -std=c++98
NAME		=	fight
OBJ_DIR		=	obj/
SRC			=	src/
INCLUDES	=	-I ./includes
FILES		= 	$(SRC)HumanA.cpp \
				$(SRC)HumanB.cpp \
				$(SRC)Weapon.cpp
				

MAIN		= 	$(SRC)main.cpp
all : $(NAME)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJ_DIR)
	$(CC) $(CFLAGS) $(FILES) $(MAIN) $(INCLUDES) -o $(NAME)

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)