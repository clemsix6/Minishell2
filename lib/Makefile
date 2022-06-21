##
## EPITECH PROJECT, 2022
## tetris
## File description:
## Makefile
##

SRC	=	$(wildcard utils/*.c cly_string/*.c cly_linked_list/*.c cly_io/*.c cly_lib/*.c)

OBJ	=	$(SRC:.c=.o)

CFLAGS = -W -Wall -Werror -Wextra -g3

CPPFLAGS	=	-I../include

TARGET	=	libcly.a

all: $(TARGET)

$(TARGET): $(OBJ)
	@ ar rc $(TARGET) $(OBJ)
	@ echo "\033[1;32m[ SUCCESS ] \033[0m\033[1;34mBinary :\033[1;32m CLY LIB \033[1;34m Compliled sucesfully.\033[0m"

clean:
	@ rm -f $(OBJ)
	@ echo "\033[3;31mRemoving CLY LIB\033[0m"

fclean: clean
	@ rm -f $(TARGET)

re : fclean all
