# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hpostman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 13:57:33 by hpostman          #+#    #+#              #
#    Updated: 2016/09/21 15:07:40 by hpostman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = memory0, memory1, strings0, strings1, strings2, strings3, stream0, \
	   stream1, lists0, lists1
SOURCES = {$(FILES)}.c

$(NAME):
	gcc -Wall -Werror -Wextra -I./my_lib.h $(SOURCES) -o $(NAME)
	ar rc $(NAME) $(SOURCES)
	ranlib $(NAME)
all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
