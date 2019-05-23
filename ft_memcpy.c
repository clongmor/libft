/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:58 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/23 15:18:43 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_ptr;
	const char	*src_ptr;

	dst_ptr = dst;
	src_ptr = src;
	i = 0;
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		if (src_ptr[i] == '\0')
			i = n;
		i++;
	}
	dst_ptr[i] = '\0';
	dst = dst_ptr;
	return (dst);
}
