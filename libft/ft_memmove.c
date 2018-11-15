/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:41:03 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/14 18:53:22 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;

	i = n;
	if (src < dest)
	{
		while (i > 0)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}