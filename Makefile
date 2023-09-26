# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 16:00:33 by brandebr          #+#    #+#              #
#    Updated: 2023/09/26 12:01:36 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c

OBJ = $(SRC:%.c=%.o)

CC = cc

FLAGS = -Wall -Werror -Wextra -I.

all: $(NAME)

%.o: %.c push_swap.h
	$(CC)  $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) #$(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
