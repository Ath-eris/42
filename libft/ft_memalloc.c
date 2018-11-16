/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:35:11 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/16 17:44:18 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tab;
	if(!(tab = malloc(size)))
		return (0);
	while (size > 0)
	{
		tab[size] = 0;
		size--;
	}
	return (tab);
}
