/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 08:16:02 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/27 17:06:41 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;
	size_t	j;

	i = 0;
	dst_len = ft_strlen(dst);
	j = dst_len;
	if (dstsize == 0)
		return (j + ft_strlen(src));
	while (dst_len < (dstsize - 1) && src[i] != '\0')
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
	}
	if (j < dstsize)
		dst[dst_len] = '\0';
	return (j + ft_strlen(src));
}
