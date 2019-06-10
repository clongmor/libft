/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:56:07 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/10 14:53:20 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nlist;

	nlist = (t_list *)ft_memalloc(sizeof(t_list));
	if (!(nlist))
		return (NULL);
	if (content == NULL)
	{
		nlist->content = NULL;
		nlist->content_size = 0;
	}
	else
	{
		nlist->content = ft_memalloc(content_size);
		if (nlist->content == NULL)
			return (NULL);
		ft_memcpy(nlist->content, content, content_size);
		nlist->content_size = content_size;
	}
	nlist->next = NULL;
	return (nlist);
}
