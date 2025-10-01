NAME = harlFilter
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

#controll codes
RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K

#all rule
all: $(NAME)
	@printf "\n"
	@printf "$(GREEN)            ___ ___        ___    _____    _     _      ___ ___   \n$(RESET)"
	@printf "$(GREEN) ___ _ _   |   |  _|   ___|  _|  |    _| _| |_ _| |_   |   |_  |  \n$(RESET)"
	@printf "$(GREEN)| -_|_'_|  | | | . |  | . |  _|  |   |_ |_   _|_   _|  | | |_| |_ \n$(RESET)"
	@printf "$(GREEN)|___|_,_|  |___|___|  |___|_|    |_____|  |_|   |_|    |___|_____|\n$(RESET)"
	@printf "$(GREEN)                                                                  \n$(RESET)"
	@printf "\n"


# compile executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# compile object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# clean rule
clean:
	rm -f $(OBJ)

# fclean rule
fclean: clean
	rm -f $(NAME)

# re rule
re: fclean all

.PHONY: all clean fclean re