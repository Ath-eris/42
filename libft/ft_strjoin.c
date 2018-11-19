/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:22:08 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/19 10:07:05 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	y;
	char	*tab;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(tab = malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		tab[i + y] = s2[y];
		i++;
	}
	tab[i + y] = '\0';
	return (tab);
}
