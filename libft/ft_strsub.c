/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:16:58 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/16 20:59:41 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		size;
	int		i;
	char	*tab;

	size = len - start;
	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	tab[size + 1] = '\0';
	i = 0;
	while (tab[i])
	{
		tab[i] = s[start];
		i++;
		start++;
	}
	return (tab);
}
