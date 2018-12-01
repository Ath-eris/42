/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoinfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 23:34:28 by mbonati           #+#    #+#             */
/*   Updated: 2018/12/01 23:35:31 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnjoinfree(char *s1, char *s2, size_t n, int x)
{
	size_t	size;
	size_t	i;
	size_t	y;
	char	*tab;

	size = ft_strlen(s1) + n + 1;
	if (!(tab = malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y] && y < n)
	{
		tab[i + y] = s2[y];
		y++;
	}
	tab[i + y] = '\0';
	if (x & 1)
		free(s1);
	if (x & 2)
		free(s2);
	return (tab);
}
