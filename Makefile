##
## EPITECH PROJECT, 2022
## Minishell2
## File description:
## Makefile
##

CC =	gcc
CFLAGS =	-W -Wextra -Wall -I./include -g3
LDFLAGS =	-L./lib/ \
			-lcly
SRC =	$(wildcard src/*.c)
OBJ =	$(SRC:.c=.o)
BIN_NAME	=	mysh


all: make_lib $(BIN_NAME) $(OBJ)


make_lib:
	@ make -C ./lib/


$(BIN_NAME): $(OBJ)
	@ echo "[FILES COMPILED]"
	@ $(CC) -o $(BIN_NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)


clean:
	@ rm -f $(OBJ)
	@ make clean -C ./lib/


fclean: clean
	@ rm -f $(BIN_NAME)
	@ make fclean -C ./lib/


re: fclean all
