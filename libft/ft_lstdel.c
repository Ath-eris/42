/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:31:08 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/21 15:07:27 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void(*del)(void *, size_t))
{
	t_list *link_p;
	
	link_p = *alst;
	while (link_p->next != NULL)
	{
		ft_lstdelone(&link_p, *del(link_p->content, link_p->content_size));
		link_p = link_p->next;
	}
}
