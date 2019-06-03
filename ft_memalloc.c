/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:38:09 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/03 16:11:07 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t		zero;
	void		*mem_area;

	zero = 0;
	mem_area = malloc(size * 1);
	if (mem_area == NULL)
		return (NULL);
	else
		return (ft_memset(mem_area, zero, size));
}
