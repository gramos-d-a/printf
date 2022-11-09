NAME	=	libftprintf.a

CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f

SRC	=	ft_printf.c ft_printf_arg.c ft_putnbr_base.c ft_printf_s.c ft_printf_c.c

LIBFT = libft

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBFT)
			cp -L $(LIBFT)/libft.a ./$(NAME)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)