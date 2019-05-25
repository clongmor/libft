# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clongmor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 09:23:50 by clongmor          #+#    #+#              #
#    Updated: 2019/05/25 11:27:53 by clongmor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memchr.c ft_memcpy.c ft_memset.c ft_putstr.c ft_strlen.c ft_bzero.c ft_memccpy.c ft_memcmp.c ft_memmove.c ft_putchar.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_putendl.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c

OSRCS = ft_memchr.o ft_memcpy.o ft_memset.o ft_putstr.o ft_strlen.o ft_bzero.o ft_memccpy.o ft_memcmp.o ft_memmove.o ft_putchar.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_putendl.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o

FLAGS = -Wall -Wextra -Werror

HEAD = libft.h

GHEAD = libft.h.gch

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(FLAGS) $(HEAD)
	ar rc $(NAME) $(OSRCS) $(GHEAD)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o
	/bin/rm -f $(GHEAD)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test:
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o
