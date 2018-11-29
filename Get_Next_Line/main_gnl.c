/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:22:57 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/29 16:28:09 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

int get_next_line(const int fd, char **line);

int main()
{
  const char *file = "fichier_test.txt";
  char *line;

  int fd = open(file, O_RDONLY);
  if (fd)
  {
    printf("Retour GNL : %d\n", get_next_line(fd, &line));
    printf("Ligne lue : %s\n", line);
  }
  else
    printf("Erreur");
  return (0);
}
