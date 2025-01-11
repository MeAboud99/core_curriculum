# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

# List of source files (add your actual .c files here)
src = ../libft  # Update with your actual source files

# Object files
OBJ = $(src:.c=.o)

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

# Rule to compile .c files into .o files
%.o: %.c
	@gcc $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	@rm -f $(OBJ)
	@echo "Object files deleted"

# Clean and delete the static library
fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

# Rebuild the project
re: fclean all

# Declare phony targets
.PHONY: all clean fclean re
