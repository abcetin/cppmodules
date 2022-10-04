NAME	= file
CC		= g++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRC = $(wildcard main.cpp)

all :
	@$(CC) -o $(NAME) $(CFLAGS) $(SRC)

clean :
	@rm -rf $(NAME)

.PHONY : all clean