#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinwang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 15:23:59 by xinwang           #+#    #+#              #
#    Updated: 2019/07/17 13:08:00 by xinwang          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_cat

SRC = ft_cat.c ft_putstr_fd.c manage_error_message.c

SRC_PATH = $(addprefix ./srcs/,$(SRC))

OBJ = $(SRC:.c=.o)

HEADER = includes

FLAG = -Wall -Werror -Wextra


all:
		gcc -I  $(HEADER) $(FLAG) -c $(SRC_PATH)
		gcc $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
