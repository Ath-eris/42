/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:05:53 by mbonati           #+#    #+#             */
/*   Updated: 2018/12/01 19:24:13 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"
#include <stdio.h>

char	*buf_split(char *buf, char **line)
{
	size_t i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	ft_strncpy(*line, buf, i);
	i++;
	ft_strncpy(buf, buf + i, BUFF_SIZE + 1);
	return (buf);
}

int get_next_line(const int fd, char **line)
{
	ssize_t				ret;
	static char			*buf = NULL;

	if (buf == NULL)
	{
		if (!(buf = malloc(BUFF_SIZE + 1)))
			return (-1);
	ft_memset(buf, 0, BUFF_SIZE + 1);
	}
	*line = NULL;
	while (ft_strchr(buf, '\n') == NULL)
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == 0)
			return (0);
		if (ret < 0)
			return (-1);
		buf[ret] = '\0';
		if (*line == NULL)
			*line = ft_strdup(buf);
		else
			*line = ft_strjoin(*line, buf);
	}
	buf = strdup(buf_split(buf, line));
	printf("Buf : %s\n", buf);
	return (1);
}
