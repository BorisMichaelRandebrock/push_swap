# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 16:00:33 by brandebr          #+#    #+#              #
#    Updated: 2023/09/25 14:03:29 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =

OBJ = $(SRC:%.c=%.o)

CC = cc

FLAGS = -Wall -Werror -Wextra -I.

all: $(NAME)

%.o: %.c push_swap.h
	$(CC)  $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $@ $^ $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
