/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:30:21 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 23:06:08 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while ((char *)s1 && (char *)s2 && ((char *)s1)[i] == ((char *)s2)[i]\
		&& i < n)
		i++;
	return (((char *)s1)[i] - ((char *)s2)[i]);
}
