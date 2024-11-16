AR = ar rc
CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_printf.c ft_putstr.c  ft_putchar.c ft_putnbrbase.c ft_putnbrbaseunsigned.c ft_strlen.c ft_putnbr.c ft_putadr.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<
	
clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
