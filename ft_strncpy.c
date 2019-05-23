/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:50:59 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/23 15:39:46 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	slen;
	char	*dst_ptr;

	slen = (size_t)ft_strlen(src);
	ft_memcpy(dst, src, len);
	dst_ptr = dst;
	while (slen < (len - 1))
	{
		dst_ptr[slen] = '\0';
		slen++;
	}
	dst = dst_ptr;
	return (dst);
}
