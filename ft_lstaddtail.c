/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddtail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 12:55:44 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/28 09:46:19 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstaddtail(t_list **lst, t_list *elem)
{
	t_list	*tmp;
	t_list	*head;
	size_t	len;

	tmp = *lst;
	head = tmp;
	if (!((len = ft_lstlen(tmp)) || !elem || !(lst)))
	{
		printf("error in adding node to the back of list");
		return ;
	}
	while (len > 1)
	{
		(tmp) = (tmp)->next;
		len--;
	}
	(tmp)->next = elem;
	*lst = head;
}
