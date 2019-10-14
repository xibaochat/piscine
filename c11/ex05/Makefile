NAME = do-op

SRC = calculator.c get_res.c main.c ft_atoi.c invalide_params.c print.c

SRC_PATH = $(addprefix ./srcs/,$(SRC))

SRCO = $(SRC:.c=.o)

HEADER_DIR = include

FLAG = -Wall -Werror -Wextra

all: 
		@/usr/bin/gcc -I  $(HEADER_DIR) $(FLAG) -c $(SRC_PATH)
		@/usr/bin/gcc $(SRCO) -o $(NAME)

clean:
		@/bin/rm -f $(SRCO)
	
fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all 