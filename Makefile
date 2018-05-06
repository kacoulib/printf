NAME		=	ft_printf
CC			=	gcc
RM			=	rm -f
CFLAGS		=	-Wall -Werror -Wextra
LIB			=	-L./libft -lft
CPPFLAGS	=	-Iincludes
SRCS		=	src/test.c

OBJS 		=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			Make -C ./libft
			$(CC) -o $(NAME) $(OBJS) $(LIB) $(CPPFLAGS)

clean:
			$(RM) $(OBJS)
			Make -C ./libft fclean

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

push:
			@git add .
			@echo "Enter Your Commit :"
			@read var1 ; git commit -m "$$var1"
			@echo "Enter The origin :"
			@read var2 ; git push origin "$$var2"

.PHONY:		all clean fclean re push