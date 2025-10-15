NAME = libft.a
SRCDIR = srcs
INCDIR = includes
SRC = $(SRCDIR)/ft_putchar.c \ $(SRCDIR)/ft_putstr.c \ $(SRCDIR)/ft_strcmp.c \ $(SRCDIR)/ft_strlen.c \ $(SRCDIR)/ft_swap.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
