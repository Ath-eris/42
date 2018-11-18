/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:27:56 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 23:09:42 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t i_str;
	size_t i_tf;

	i_str = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	i_tf = 0;
	while (str)
	{
		while (((char *)str)[i_str + i_tf] == ((char *)to_find)[i_tf]\
				&& ((char *)to_find)[i_tf])
			i_tf++;
		if (((char *)to_find)[i_tf] == '\0')
			return ((char *)str + i_str);
		i_str++;
	}
	return (NULL);
}
