NAME	= Array
CC		= g++
CFLAGS	=  -Wall -Werror -Wextra -std=c++98

SRC = $(wildcard *.cpp)

all :
	@$(CC) -o $(NAME) $(CFLAGS) $(SRC)

clean :
	@rm -rf $(NAME)

re : clean all

.PHONY : all clean re