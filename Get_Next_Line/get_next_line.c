/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:05:53 by mbonati           #+#    #+#             */
/*   Updated: 2018/12/02 00:23:16 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

int 	check_error(int ret)
{
	if (ret == 0)
		return (0);
	if (ret < 0)
		return (-1);
}

char	*buf_split(char *buf, char **line)
{
	size_t i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	if (*line == NULL)
		*line = ft_strndup(buf, i);
	else
		*line = ft_strnjoinfree(*line, buf, i, 1);
	i++;
	ft_strcpy(buf, buf + i);
	return (buf);
}

int get_next_line(const int fd, char **line)
{
	ssize_t				ret;
	static char			*buf = NULL;

	*line = NULL;
	if (buf == NULL)
	{
		if (!(buf = malloc(BUFF_SIZE + 1)))
			return (-1);
		ft_memset(buf, 0, BUFF_SIZE + 1);
	}
	if (ft_strchr(buf, '\n') != NULL)
		buf = buf_split(buf, line);
	else
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == 0)
			return (0);
		if (ret < 0)
			return (-1);
		buf[ret] = '\0';
		while (ft_strchr(buf, '\n') == NULL)
		{
			if (*line == NULL)
				*line = ft_strdup(buf);
			else
				*line = ft_strjoin(*line, buf);
			ret = read(fd, buf, BUFF_SIZE);
			buf[ret] = '\0';
		}
		buf = strdup(buf_split(buf, line));
	}
	return (1);
}
