#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinwang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/12 14:33:10 by xinwang           #+#    #+#              #
#    Updated: 2019/07/14 14:58:39 by xinwang          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCO = $(SRC:.c=.o)

SRC_PATH = $(addprefix srcs/,$(SRC))

SRCO_PATH = $(addprefix srcs/,$(SRCO))

HEADER_DIR = includes

FLAG = -Wall -Werror -Wextra

$(NAME): all

all:
		gcc -I $(HEADER_DIR) -c $(SRC_PATH) $(FLAG)
		ar rc $(NAME) $(SRCO)
		mv $(SRCO) srcs

clean:
		rm -f $(SRCO_PATH)

fclean: clean
		rm -f $(NAME)

re: fclean all
