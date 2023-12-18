CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Executable name
NAME = ex01

# Source files
SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Compile source files to object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re