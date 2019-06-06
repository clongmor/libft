/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:31:17 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/06 17:51:25 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**tmp;

	tmp = alst;
	while ((*tmp)->next)
	{
		ft_lstdelone(tmp, (*del)((*tmp)->content, (*tmp)->content_size));
		(*tmp) = (*tmp)->next;
	}
	*alst = NULL;
}
