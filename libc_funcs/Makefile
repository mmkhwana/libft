# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 10:05:04 by mmkhwana          #+#    #+#              #
#    Updated: 2019/05/30 13:48:06 by mmkhwana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SOURCES = ft_atoi.c ft_strcat.c ft_strcmp.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_memcpy.c ft_strchr.c ft_strcpy.c ft_strncat.c ft_strncpy.c

OBJECTS = ft_atoi.o ft_strcat.o ft_strcmp.o ft_strlen.o ft_strncmp.o ft_strrchr.o ft_memcpy.o ft_strchr.o ft_strcpy.o ft_strncat.o ft_strncpy.o

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
