/*
** create.c for autor dir in /home/benoit.pingris/delivery/github_perso/auto_dir
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Sun Jun 25 14:52:36 2017 benoit pingris
** Last update Sun Jun 25 15:20:06 2017 benoit pingris
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "macro.h"
#include "useful.h"

int		create_dir()
{
  struct stat	st;

  if (stat(SRC, &st) == -FAILURE)
    mkdir(SRC, 0700);
  if (stat(INC, &st) == -FAILURE)
    mkdir(INC, 0700);
  return (SUCCESS);
}

int		create_make(char *s)
{
  int		fd;
  char		*tmp;

  if (!(tmp = malloc(sizeof(char) * strlen(s) + 300)))
    return (putstr(ERR_MEM, ERROR, STDOUT_FILENO));
  if (sprintf(tmp, "%s%s%s", MAKE_1, s, MAKE_2) == -FAILURE)
    return (putstr(ERR_MEM, ERROR, STDOUT_FILENO));
  if ((fd = open(MAKE, O_CREAT | O_TRUNC | O_RDWR, 0644)) == -FAILURE)
    return (putstr(ERR_MAKE, ERROR, STDOUT_FILENO));
  write(fd, tmp, strlen(tmp));
  if (close(fd) == -FAILURE)
    return (putstr(ERR_CLOSE, ERROR, STDOUT_FILENO));
  free(tmp);
  return (SUCCESS);
}

int		create_srcs()
{
  int		fd;

  if ((fd = open(MAIN, O_CREAT | O_TRUNC | O_RDWR, 0644)) == -FAILURE)
    return (putstr(ERR_FILE, ERROR, STDOUT_FILENO));
  dprintf(fd, "#include \"macro.h\"\n\nint\tmain(int ac, char **av)\n{\n(void)ac;\n(void)av;\n\treturn (SUCCESS);\n}\n");
  if (close(fd) == -FAILURE)
    return (putstr(ERR_CLOSE, ERROR, STDOUT_FILENO));
  if ((fd = open(MACRO, O_CREAT | O_TRUNC | O_RDWR, 0644)) == -FAILURE)
    return (putstr(ERR_FILE, ERROR, STDOUT_FILENO));
  dprintf(fd, "#ifndef MACRO_H_\n# define MACRO_H_\n\n# define SUCCESS 0\n# define FAILURE 1\n# define ERROR 84\n\n#endif /* !MACRO_H_ */");
  if (close(fd) == -FAILURE)
    return (putstr(ERR_CLOSE, ERROR, STDOUT_FILENO));
  return (SUCCESS);
}
