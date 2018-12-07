/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:58:53 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/28 16:36:37 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		list->content = NULL;
		list->content_size = 0;
		list->next = NULL;
		return (list);
	}
	list->content = ft_strndup((char *)content, content_size);
	list->next = NULL;
	list->content_size = content_size;
	return (list);
}
