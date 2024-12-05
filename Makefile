SRC = ft_printf_hexa.c ft_printf.c ft_printp.c ft_putchar.c \
		ft_putnbr.c ft_putstr.c ft_putun.c
		 

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror 
AR = ar cr
RM = rm -rf
NAME = libftprintf.a
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean

