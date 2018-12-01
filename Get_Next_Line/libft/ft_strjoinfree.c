/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:07:36 by mbonati           #+#    #+#             */
/*   Updated: 2018/12/01 22:06:47 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoinfree(char *s1, char *s2, int x)
{
	char *s3;

	s3 = ft_strjoin(s1, s2);
	if (x & 1)
		free(s1);
	if (x & 2)
		free(s2);
	return (s3);
}
