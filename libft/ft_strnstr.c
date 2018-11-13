/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:37:37 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/12 14:36:58 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int i_str;
	int i_tf;

	i_str = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i_str])
	{
		i_tf = 0;
		while (tr[i_str + i_tf] == to_find[i_tf] && to_find[i_tf] != '\0'\
				&& i_tf < len)
			i_tf++;
		if (to_find[i_tf] == '\0')
			return (&str[i_str]);
		i_str++;
	}
	return (NULL);
}
