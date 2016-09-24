# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hpostman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 13:57:33 by hpostman          #+#    #+#              #
#    Updated: 2016/09/24 06:32:33 by hpostman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
MEMORY_FUNCTIONS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
				   ft_memchr.o ft_memrchr.o ft_memcmp.o ft_memalloc.o ft_memdel.o
STRING_FUNCTIONS = ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
				   ft_strncat.o ft_strlcat ft_strchr.o ft_strrchr.o ft_strstr.o \
				   ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_atoi ft_isalpha.o \
				   ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper \
				   ft_tolower.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter \
				   ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ \
				   ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_itoa
STREAM_FUNCTIONS = ft_putchar.o ft_pustr.o ft_putendl.o ft_putnbr.o ft_putchar_fd \
				   ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd
LIST_FUNCTIONS = ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter \
				 ft_lstmap
OBJECTS = $(MEMORY_FUNCTIONS)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
%.o: %.c
	gcc -Wall -Werror -Wextra -c -o $@ $<
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
