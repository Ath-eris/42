/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 18:15:02 by mbonati           #+#    #+#             */
/*   Updated: 2018/12/10 19:51:04 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"
#include <fcntl.h>

int	get_next_line(const int fd, char **line);

/*int	check_links(char **tetrimino)   //fonction qui check les cases collees
{

}*/

int	check_cases(char **tetrimino)
{
	size_t	i;
	size_t	y;
	size_t	full_cases;
	size_t	empty_cases;

	y = 0;
	empty_cases = 0;
	full_cases = 0;
	while (y < 4)
	{
		i = 0;
		while (i < 4)
		{
			if (tetrimino[y][i] == '#')
				full_cases++;
			else if (tetrimino[y][i] == '.')
				empty_cases++;
			else
				return (0);
			i++;
		}
		y++;
	}
	if (empty_cases != 12 || full_cases != 4)
		return (0);
	//if (!(check_tetrimino(**tetrimino)))
	//	return (0);
	return (1);
}

int	check_file(int fd)
{
	size_t	i;
	char	*line;
	char	**tetrimino;
	int		ret;

	while ((ret = get_next_next_line(fd, &line)))
	{
		if (ret == -1)
			return (0);
		i = 0;
		while (i < 4)
		{
			if (!(ft_strlen(line) == 4))
				return (0);
			if (!(tetrimino[i] = malloc(sizeof(char) * 5)))
				return (0);
			tetrimino[i] = ft_strdup(line);
			get_next_line(fd, &line);
			i++;
		}
		if (!(check_cases(tetrimino)))
			return (0);
		if (line != '\n')
			return (0);
	}
	return (1);
}
