#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinwang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 09:34:13 by xinwang           #+#    #+#              #
#    Updated: 2019/07/21 09:34:15 by xinwang          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS	=	${wildcard *.c}

OBJS	=	${SRCS:.c=.o}

CFLAGS	=	-Wall -Wextra -Werror

CC		=	gcc

RM		=	rm -f

NAME	=	ft_tail

.c.o	:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


all		:	${OBJS}
			${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

${NAME} :	all

re		:	fclean all

.PHONY	:	all clean fclean re ${NAME}
