/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:59:54 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 16:55:18 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	size;
	char	*tab;

	start = 0;
	while (s[start] == ' ' && s[start] == '\n' && s[start] == '\t')
		start++;
	end = ft_strlen(s);
	while (s[end] == ' ' && s[end] == '\n' && s[end] == '\t')
		end--;
	size = end - start + 1;
	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	size = 0;
	while (start <= end)
	{
		tab[size] = s[start];
		start++;
	}
	tab[size] = '\0';
	return (tab);
}
