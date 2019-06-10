/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 08:38:11 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/10 10:01:04 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*head;
	t_list	*first;

	if (lst == NULL || f == NULL)
		return (NULL);
	(tmp) = f(lst);
	if (!(first = (ft_lstnew((tmp)->content, (tmp)->content_size))))
		return (NULL);
	head = first;
	(lst) = (lst)->next;
	while (lst)
	{
		(tmp) = f(lst);
		if (!(first->next = (ft_lstnew((tmp)->content, (tmp)->content_size))))
			return (NULL);
		(first) = (first)->next;
		(lst) = (lst)->next;
	}
	return (head);
}
