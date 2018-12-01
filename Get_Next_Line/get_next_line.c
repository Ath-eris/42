/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:05:53 by mbonati           #+#    #+#             */
/*   Updated: 2018/12/01 23:12:19 by mbonati          ###   ########.fr       */
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
	printf("Buf_split : %s\n", buf);
	while (buf[i] != '\n')
		i++;
	printf("i : %zu\n", i);
	*line = ft_strnjoinfree(*line, buf, i, 1);
	printf("Strjoinfree : %s\n", *line);
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
	else
		*line = ft_strdup(buf);
	ret = read(fd, buf, BUFF_SIZE);
	while (ft_strchr(buf, '\n') == NULL)
	{
		if (ret == 0)
			return (0);
		if (ret < 0)
			return (-1);
		buf[ret] = '\0';
		if (*line == NULL)
			*line = ft_strdup(buf);
		else
			*line = ft_strjoin(*line, buf);
		ret = read(fd, buf, BUFF_SIZE);
	}
	printf("Line : %s\n", *line);
	buf = strdup(buf_split(buf, line));
	printf("Buf : %s\n", buf);
	return (1);
}
