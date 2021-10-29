# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rebobbye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 14:40:31 by rebobbye          #+#    #+#              #
#    Updated: 2021/10/29 14:51:33 by rebobbye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =  ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c

OBJ = $(patsubst %.c,%.o,$(LIST))

OPFLAGS = -O2
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(LIST)
	gcc $(FLAGS) -c $(LIST)

clean: clean
	rm -f $(OBJ) $(D_FILE)

fclean: clean
	rm -f $(name)

re: fclean all