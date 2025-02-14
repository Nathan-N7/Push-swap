# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: natrodri <natrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 04:34:37 by natrodri          #+#    #+#              #
#    Updated: 2025/02/14 04:48:42 by natrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

MOVESDIR = operations

SRC = exceptions.c ft_atol.c ft_extra.c ft_split.c part_main.c push_swap.c \
      ft_atoi.c ft_extra2.c ft_radix.c \
      $(MOVESDIR)/push.c $(MOVESDIR)/rrotate.c \
      $(MOVESDIR)/rotate.c $(MOVESDIR)/swap.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(MOVESDIR)/%.o: $(MOVESDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
