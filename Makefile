# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 16:00:33 by brandebr          #+#    #+#              #
#    Updated: 2023/10/04 12:09:01 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c utils.c 

OBJ = $(SRC:%.c=%.o)

CC = cc

FLAGS = -Wall -Werror -Wextra -I. -I./libft -I./ft_printf

LIBFT = ./libft/libft.a
LIBFT_DIR = ./libft

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_DIR = ./ft_printf

all: $(NAME)

%.o: %.c push_swap.h
	$(CC)  $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT) $(FT_PRINTF)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o $(NAME)

$(FT_PRINTF):
	@make all -C $(FT_PRINTF_DIR)

$(LIBFT): 
	@make all -C $(LIBFT_DIR)
	
me_watch:
	$(CC) -g3 $(FLAGS) $(LIBFT) $(FT_PRINTF) *.c -o debug
#	@./debug

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
