# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 15:49:00 by rcochran          #+#    #+#              #
#    Updated: 2025/10/10 15:54:01 by rcochran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


.PHONY : all clean fclean re

CC			= 	c++
CFLAGS		=	-Wall -Werror -Wextra -Wno-unused -std=c++98
NAME		=	Moar_Brainz
OBJ_DIR		=	obj/
SRC			=	src/
INCLUDES	=	-I ./includes
FILES		= 	$(SRC)Zombie.cpp \
				$(SRC)zombieHorde.cpp

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