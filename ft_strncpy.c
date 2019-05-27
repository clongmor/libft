/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:50:59 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/27 15:57:25 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	slen;
	char	*dst_ptr;

	dst_ptr = dst;
	slen = (size_t)ft_strlen(src);
	if (len <= slen)
	{
		ft_memcpy(dst_ptr, src, len);
		dst = dst_ptr;
		return (dst);
	}
	else
		ft_memcpy(dst_ptr, src, slen);
	while (slen < len)
	{
		dst_ptr[slen] = '\0';
		slen++;
	}
	dst = dst_ptr;
	return (dst);
}
