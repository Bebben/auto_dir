/*
** macro.h for auto_dir in /home/benoit.pingris/delivery/github_perso/auto_dir
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Sun Jun 25 13:15:56 2017 benoit pingris
** Last update Sun Jun 25 15:17:38 2017 benoit pingris
*/

#ifndef MACRO_H_
# define MACRO_H_

# define SUCCESS 0
# define FAILURE 1
# define ERROR 84

# define SRC "src"
# define INC "include"
# define MAKE "Makefile"
# define MAIN "src/main.c"
# define MACRO "include/macro.h"
# define HELP "[USAGE]\n\t./auto_dir binary_name\n"

# define ERR_FILE "Error while creating source files.\n"
# define ERR_MAKE "Error while creating the Makefile.\n"
# define ERR_CLOSE "Error while closing the file.\n"
# define ERR_MEM "Error while allocating memory.\n"

# define MAKE_1 "CC\t=\tgcc\n\nNAME\t=\t"
# define MAKE_2 "\n\nSRC\t=\tsrc/main.c\n\nOBJ\t=\t$(SRC:.c=.o)\n\nCFLAGS\t+=\t-I./include -Wall -Wextra\n\nRM\t=\trm -f\n\nall\t:\t$(NAME)\n\n$(NAME)\t:\t$(OBJ)\n\t\t$(CC) -o $(NAME) $(OBJ)\n\nclean\t:\n\t\t$(RM) $(OBJ)\n\nfclean\t:\tclean\n\n\t\t$(RM) $(NAME)\n\nre\t:\tfclean all\n\n.PHONY\t:\tall clean fclean re\n\n"

#endif /* !MACRO_H_ */
