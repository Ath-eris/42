/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:05:53 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/29 17:25:24 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>
#include <unistd.h>

int get_next_line(const int fd, char **line)
{
	static size_t 	i;
	ssize_t			ret;
	char			buf[BUFF_SIZE + 1];

	i = 0;
	*line = NULL;
	while (ft_strchr(buf, '\n') == NULL)
	{
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		if (*line == NULL)
			*line = ft_strdup(buf);
		else
			*line = ft_strjoin()
	}
	*line = buf;
	return (-1);
}
