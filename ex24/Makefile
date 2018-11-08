NAME = libft.a

SRCS = ./srcs/*

HEADER = ./includes/*

$(NAME): 
	gcc -c -Wall -Wextra -Werror $(SRCS) $(HEADER)
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

clean: 
	rm -rf *.o

fclean: clean
	rm $(NAME)

re: fclean all

