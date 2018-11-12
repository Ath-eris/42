/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:27:56 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/12 14:33:59 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i_str;
	int i_tf;
	int i;

	i_str = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i_str])
	{	
		while (str[i_str + i_tf] == to_find[i_tf] && to_find[i_tf])
			i_tf++;
		if (to_find[i_tf] == '\0')
			return (&str[i_str])
		i_str++;
	}
	return (NULL);
}
