NAME = ft_display_file
SRC = ft_display_file.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@echo "Nothing to clean."

fclean: clean
	$(RM) $(NAME)

re: fclean all
