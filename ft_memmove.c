/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:02:52 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/23 15:56:23 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst_ptr;
	char		*tmp_ptr;
	const char	*src_ptr;

	dst_ptr = dst;
	src_ptr = src;
	tmp_ptr = (char*)malloc(ft_strlen(src_ptri) + 1);
	i = 0;
	while (i < len && src_ptr[i] != '\0')
	{
		tmp_ptr[i] = src_ptr[i];
		i++;
	}
	tmp_ptr[i] = '\0';
	i = 0;
	while (tmp_ptr[i])
	{
		dst_ptr[i] = tmp_ptr[i];
		i++;
	}
	dst = dst_ptr;
	return (dst);
}
