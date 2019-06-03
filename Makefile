# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clongmor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 09:23:50 by clongmor          #+#    #+#              #
#    Updated: 2019/06/03 17:59:12 by clongmor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memchr.c ft_memcpy.c ft_memset.c ft_putstr.c ft_strlen.c ft_bzero.c \
	   ft_memccpy.c ft_memcmp.c ft_memmove.c ft_putchar.c ft_strdup.c \
	   ft_strcpy.c ft_strncpy.c ft_putendl.c ft_strcat.c ft_strncat.c \
	   ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
	   ft_strcmp.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_isprint.c \
	   ft_isascii.c ft_isalpha.c ft_islower.c ft_isupper.c ft_isdigit.c \
	   ft_isalnum.c ft_atoi.c ft_strclr.c ft_memalloc.c ft_memdel.c \
	   ft_strnew.c ft_strdel.c ft_striter.c ft_striteri.c ft_strmap.c \


OSRCS = ft_memchr.o ft_memcpy.o ft_memset.o ft_putstr.o ft_strlen.o \
		ft_bzero.o ft_memccpy.o ft_memcmp.o ft_memmove.o ft_putchar.o \
		ft_strdup.o ft_strcpy.o ft_strncpy.o ft_putendl.o ft_strcat.o \
		ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o \
		ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_toupper.o ft_tolower.o \
		ft_isprint.o ft_isascii.o ft_isalpha.o ft_islower.o ft_isupper.o \
		ft_isdigit.o ft_isalnum.o ft_atoi.o ft_strclr.o ft_memalloc.o \
		ft_memdel.o ft_strnew.o ft_strdel.o ft_striter.o ft_striteri.o \
		ft_strmap.o

FLAGS = -Wall -Wextra -Werror

HEAD = libft.h

GHEAD = libft.h.gch

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(FLAGS) $(HEAD)
	ar rc $(NAME) $(OSRCS) $(GHEAD)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OSRCS)
	/bin/rm -f $(GHEAD)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test:
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o
