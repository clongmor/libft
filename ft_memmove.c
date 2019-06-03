/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:02:52 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/03 13:12:39 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_ptr;
	const char	*src_ptr;

	dst_ptr = dst;
	src_ptr = src;
	if ((dst == src && len == 0) || (dst == NULL && src == NULL))
		return (NULL);
	if (src_ptr < dst_ptr)
	{
		while (len > 0)
		{
			ft_memcpy((dst_ptr + (len - 1)), (src_ptr + (len - 1)), 1);
			len--;
		}
	}
	if (src_ptr > dst_ptr)
		ft_memcpy(dst_ptr, src_ptr, len);
	dst = dst_ptr;
	return (dst);
}
