NAME = push_swap
SRC = main.c ft_split.c getlast.c push.c reverserotate.c rotate.c swap.c utils.c \
checkduplicates.c index.c choosesize.c smallsort.c bigsort.c target.c costs.c \
maths.c moveexpenses.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)

	@${CC} ${SRC} -o ${NAME}
	
clean :
		$(RM) $(OBJ)

fclean : clean

		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
