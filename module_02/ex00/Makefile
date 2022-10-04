NAME	= fixed
CC		= g++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRC = $(wildcard *.cpp)

all :
	@$(CC) -o $(NAME) $(CFLAGS) $(SRC)

clean :
	@rm -rf $(NAME)

.PHONY : all clean