# **************************************************************************** #
#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 10:05:04 by mmkhwana          #+#    #+#              #
#    Updated: 2019/06/03 16:51:59 by mmkhwana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SOURCES = ft_atoi.c ft_strcat.c ft_strcmp.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_memcpy.c ft_memmove.c ft_strchr.c ft_strcpy.c ft_strncat.c ft_strncpy.c ft_memcmp.c ft_memchr.c ft_strstr.c ft_memset.c ft_strdup.c ft_bzero.c ft_memccpy.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c 

OBJECTS = ft_atoi.o ft_strcat.o ft_strcmp.o ft_strlen.o ft_strncmp.o ft_strrchr.o ft_memcpy.o ft_memmove.o ft_strchr.o ft_strcpy.o ft_strncat.o ft_strncpy.o ft_memcmp.o ft_memchr.o ft_strstr.o ft_memset.o ft_strdup.o ft_bzero.o ft_memccpy.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o

flags = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@$(CC) -c $(SOURCES) $(flags)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean:
	@rm -f $(NAME)

re: fclean all

c:
	@gcc $(flags) main.c libft.a

N:
	@norminette $(SOURCES)
