# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihchoi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/23 20:32:54 by jihchoi           #+#    #+#              #
#    Updated: 2026/04/23 20:40:30 by jihchoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove \
      ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strlcat ft_strlcpy \
      ft_atoi.c ft_lower ft_toupper \
      ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
