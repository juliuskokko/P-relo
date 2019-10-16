# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/29 10:23:41 by jkokko            #+#    #+#              #
#    Updated: 2019/10/16 10:55:26 by jkokko           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCE = ft_display_file.c

OBJECTS = ft_display_file.o

FLAGS = -Wall -Werror -Wextra

all:
	gcc $(FLAGS) -c $(SOURCE) -I
	gcc -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

.PHONY: clean fclean all re
