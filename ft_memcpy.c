/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:58 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/21 14:09:56 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	char		*dst_ptr;
	const char	*src_ptr;

	dst_ptr = dst;
	src_ptr = src;
	i = 0;
	//if (ft_strlen(dst_ptr) < n || ft_strlen(src_ptr) < n)
	//needs to return an error about builtin destination buffer overflow if n > destination allocated space.
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		if (src_ptr[i] == '\0')
			i = n;
		i++;
		if (dst_ptr[i] == '\0' && i != n)
		{
			//put an error for buffer overflow and quit out - still need to check logic
		}
	}
	dst = dst_ptr;
	return (dst);
}
