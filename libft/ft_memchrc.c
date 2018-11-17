/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchrc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:26:14 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 23:03:02 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char	x;
	i = 0;
	while (i < n)
	{
		x = (char)&s[i];
		if (x == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
