/*
** main.c for wow in /home/benoit.pingris/delivery/github_perso/auto_dir/src
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Sun Jun 25 13:15:27 2017 benoit pingris
** Last update Sun Jun 25 14:53:14 2017 benoit pingris
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
#include "gnl.h"

int	disp_help()
{
  putstr(HELP, SUCCESS, STDOUT_FILENO);
  return (SUCCESS);
}

int	main(int ac, char **av)
{
  if (ac == 1 || strcmp(av[1], "-h") == 0)
    return (disp_help());
  create_dir();
  create_make(av[1]);
  create_srcs();
  return (SUCCESS);
}
