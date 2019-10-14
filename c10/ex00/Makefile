#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinwang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 09:10:42 by xinwang           #+#    #+#              #
#    Updated: 2019/07/16 09:25:26 by xinwang          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file 

SRC = display_file.c 

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

$(NAME): all

all: display_file.c
		gcc $(FLAGS) -c $(SRC)
		gcc $(OBJ) -o $(NAME)
 
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all