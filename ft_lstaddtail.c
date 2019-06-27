/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddtail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 12:55:44 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/27 18:08:06 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstaddtail(t_list *lst, t_list *elem)
{
	size_t	len;

	if (!((len = ft_lstlen(lst)) || !elem || !lst))
	{
		printf("error in adding node to the back of list");
		return ;
	}
	while (len > 1)
	{
		printf("in lstaddtail loop: current node has content %s and size %zu\n", lst->content, lst->content_size);
		(lst) = (lst)->next;
		len--;
	}
	printf("check we're on the last node: %s\n", lst->content);
	(lst)->next = elem->content;
//	(lst) = lst->next; this line throws seg fault so check previous line worked
	printf("added new element with content: %s and size: %zu\n", lst->content, lst->content_size);
}
