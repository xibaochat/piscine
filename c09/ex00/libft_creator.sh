# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinwang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/12 13:28:43 by xinwang           #+#    #+#              #
#    Updated: 2019/07/12 13:33:58 by xinwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c	ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rcs	libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
rm		ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
