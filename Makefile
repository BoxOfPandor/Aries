##
## EPITECH PROJECT, 2023
## makefile
## File description:
## Task 01 - make file
##

C_FILES = aries.c \
		  info/get_race.c \
		  info/get_classe.c \
		  info/modifiers.c \
		  dice.c \
		  stats.c
O_FILES = $(C_FILES:.c=.o)
FLAGS	= -Wall -Wextra -Werror
NAME	= Aries

all: ${NAME}

${NAME}: ${O_FILES}
	gcc ${O_FILES} -g -o ${NAME} -I./include ${FLAGS}
	rm *.o
	rm info/*.o

%.o: %.c
	gcc -c -o $@ $<

clean:
	rm -f *.out
	rm -f ${O_FILES}

fclean: clean
	rm -f ${NAME}

re: fclean all
