/*
** putstr.c for auto_dir in /home/benoit.pingris/delivery/github_perso/auto_dir
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Sun Jun 25 13:26:41 2017 benoit pingris
** Last update Sun Jun 25 13:27:43 2017 benoit pingris
*/

#include <unistd.h>
#include <string.h>

int	putstr(char *s, int ret, int stream)
{
  write(stream, s, strlen(s));
  return (ret);
}
