/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:09:04 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/16 19:09:06 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	if (i = n)
		return (NULL);
	else
		return (&dest[i + 1]);
}
