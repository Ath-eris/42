/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchrc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:26:14 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/14 17:29:51 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (s[i] && i < n)
	{
		if (s[i] == c)
			return (&s[i])
		i++;
	}
	return (NULL);
}