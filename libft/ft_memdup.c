/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:40:51 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/27 23:45:42 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memdup(const void *src, size_t n)
{
	void *dest;

	if (!(dest = malloc(n)))
		return (NULL);
	return (ft_memcpy(dest, src, n));
}
