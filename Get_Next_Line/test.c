/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:43:30 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/29 15:16:31 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	main()
{
	const char *file = "fichier_test.txt";
	char buf[300];
	int fd = open(file, O_RDONLY);
	ssize_t int_read = read(fd, buf, 300);
	
	printf("%zd", int_read);
	write(1, buf, int_read);
	return (0);
}
