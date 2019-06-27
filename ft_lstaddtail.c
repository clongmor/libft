/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddtail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 12:55:44 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/27 16:31:02 by clongmor         ###   ########.fr       */
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
		(lst) = (lst)->next;	
		len--;
	}
	(lst)->next = elem->content;
}
