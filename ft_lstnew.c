/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:56:07 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/06 16:15:28 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nlist;

	nlist = malloc(sizeof(t_list));
	if (!(nlist))
		return (NULL);
	else
	{
		nlist->content = (void *)content;
		if (nlist->content == NULL)
			nlist->content_size = 0;
		else
			nlist->content_size = content_size;
		nlist->next = NULL;
	}
	free(nlist);
	return (nlist);
}
