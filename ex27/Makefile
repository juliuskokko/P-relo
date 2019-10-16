# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkokko <jkokko@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/29 10:23:41 by jkokko            #+#    #+#              #
#    Updated: 2019/08/29 10:39:06 by jkokko           ###   ########.fr        #
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
