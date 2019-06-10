/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:29:24 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/10 13:05:09 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem_area;

	mem_area = (char *)ft_memalloc(size + 1);
	if (mem_area == NULL)
		return (NULL);
	return (mem_area);
}
