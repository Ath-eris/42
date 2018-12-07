# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbonati <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/06 17:51:25 by mbonati           #+#    #+#              #
#    Updated: 2018/12/06 18:45:53 by mbonati          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit.a

FILE = fillit.c\

OBJET = $(FILE:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJET): fillit.h

$(NAME): $(OBJET)

clean:
	rm -rf $(OBJET)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY = clean re fclean all
