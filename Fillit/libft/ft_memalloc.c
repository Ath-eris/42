/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:35:11 by mbonati           #+#    #+#             */
/*   Updated: 2018/12/03 15:29:33 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*tab;

	if (!(tab = malloc(sizeof(char) * size)))
		return (NULL);
	while (size-- > 0)
		tab[size] = 0;
	return (tab);
}
