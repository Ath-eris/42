/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:54:12 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/12 16:53:31 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	int i;
	int y;

	i = ft_strlen(dest);
	y = 0;
	while (i < n - 1)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	if (i < )
		return (i + ft_strlen(src));
	else
		return (strlen(src) + strlen(dest));

}
