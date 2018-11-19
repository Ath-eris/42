/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:09:04 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/19 07:11:13 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest_v, const void *src_v, int c, size_t n)
{
	size_t	i;
	char	*src;
	char	*dest;

	i = 0;
	src = (char *)src_v;
	dest = (char *)dest_v;
	while (i < n && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	if (i == n)
		return (NULL);
	else
		return (&dest[i + 1]);
}
