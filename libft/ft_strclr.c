/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:16:11 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/20 17:18:33 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		s[i] = '\0';
		i--;
	}
	s[i] = '\0';
}
