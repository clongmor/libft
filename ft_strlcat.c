/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 08:16:02 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/25 11:11:10 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;
	char	*dst_ptr;

	dst_ptr = dst;
	i = 0;
	dst_len = ft_strlen(dst) + 1;
	if (dst_len >= dstsize || dstsize == 0)
		return (dst_len + ft_strlen(src));
	while (dst_len < dstsize && src[i] != '\0')
	{
		dst_ptr[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dst_ptr[dst_len] = '\0';
	return (dst_len + ft_strlen(src));
}
