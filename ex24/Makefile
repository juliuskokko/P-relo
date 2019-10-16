# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 12:13:24 by jkokko            #+#    #+#              #
#    Updated: 2019/10/16 09:59:45 by jkokko           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_swap.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c

OBJECTS = ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCE) -I ./includes/
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
