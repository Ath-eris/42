/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:05:53 by mbonati           #+#    #+#             */
/*   Updated: 2018/12/03 19:20:19 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"
#include <stdio.h>

void	buf_split(char *buf, char **line)
{
	size_t	i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	buf[i] = '\0';
	if (*line == NULL)
		*line = ft_strdup(buf);
	else
		*line = ft_strjoin(*line, buf);
	i++;
	ft_strcpy(buf, buf + i);
}

int		get_next_line(const int fd, char **line)
{
	int					ret_read;
	static char			*buf = NULL;

	*line = NULL;
	if (buf == NULL)
		if (!(buf = ft_memalloc(BUFF_SIZE + 1)))
			return (-1);
	if (ft_strchr(buf, '\n') != NULL)
		buf_split(buf, line);
	if (buf[0] != '\0')
		*line = ft_strdup(buf);
	if (buf[0] == '\0')
	{
		if (!(ret_read = read(fd, buf, BUFF_SIZE)))
			return (0);
	}
	else
	{
		ret_read = read(fd, buf, BUFF_SIZE);
		buf[ret_read] = '\0';
		while (ft_strchr(buf, '\n') == NULL)
		{
			if (*line == NULL)
				*line = ft_strdup(buf);
			else
				*line = ft_strjoin(*line, buf);
			ret_read = read(fd, buf, BUFF_SIZE);
			buf[ret_read] = '\0';
		}
		buf_split(buf, line);
	}
	return (1);
}
