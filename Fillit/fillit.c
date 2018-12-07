/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 18:47:33 by mbonati           #+#    #+#             */
/*   Updated: 2018/12/08 00:41:10 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft/libft.h"
#include <fcntl.h>

int	get_next_line(const int fd, char **line);

int	check_tetrimino(char **tetrimino)   //fonction qui check les cases collees

int	check_lines(const int fd)
{
	char	*line;
	size_t	i;
	size_t	nbr_lines;
	size_t	full_cases;
	size_t	empty_cases;

	while (get_next_line(fd, &line) > 0) //tant que le fichier n'est pas fini
	{
		nbr_lines = 0;
		empty_cases = 0;
		full_cases = 0;
		while (nbr_lines < 4)
		{
			if (ft_strlen(line) != 4)
				return (0);
			i = 0;
			while (i < 4)
			{
				if (line[i] == '#')
					full_cases++;
				else if (line[i] == '.')
					empty_cases++;
				else
					return (0);
				i++;
			}
			nbr_lines++;
			if (get_next_line(fd, &line) != 1)
				return (0);
		}
		if (empty_cases != 12 || full_cases != 4)
			return (0);
		if (line[0] != '\0')
			return (0);
		if (!(check_tetrimino(**tetrimino)))
			return (0);
	}	
	return (1);
}

int	main(int ac, char **av)
{
	const char *file = av[1];
	int fd = open(file, O_RDONLY);
	if (ac)
		printf("Retour : %d\n", check_tetriminos(fd));
	return (0);
}
