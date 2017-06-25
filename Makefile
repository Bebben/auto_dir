##
## Makefile for auto_dir in /home/benoit.pingris/delivery/github_perso/auto_dir
## 
## Made by benoit pingris
## Login   <benoit.pingris@epitech.net>
## 
## Started on  Sun Jun 25 13:14:59 2017 benoit pingris
## Last update Sun Jun 25 14:57:23 2017 benoit pingris
##

CC	=	gcc

NAME	=	auto_dir

SRC	=	src/main.c		\
		src/create.c		\
		src/gnl/gnl.c		\
		src/useful/putstr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I./include -Wall -Wextra

RM	=	rm -f

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean	:
		$(RM) $(OBJ)

fclean	:	clean

		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re

