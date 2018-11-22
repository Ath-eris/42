/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:41:24 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/23 00:21:59 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *lst_cpy;
	t_list *new_list;
	
	if	(!(new_list = malloc(t_list)))
		return (NULL);
	new_list = (*f)(lst);
	lst_cpy = new_list->next;
	lst = lst->next;
	while (lst != NULL)
	{
		if	(!(lst_cpy = malloc(t_list)))
			return (NULL);
		lst_cpy = (*f)(lst);
		lst_cpy = lst_cpy->next;
	}
}
