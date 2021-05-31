SRC			= ft_strlen.c

OBJ			= ${SRC:.c=.o}
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
LIBFLAGS	= rcs
NAME		= libft.a
RM			= rm -f

all: 		$(NAME)

$(NAME):	
			$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ)
			ar $(LIBFLAGS) $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
