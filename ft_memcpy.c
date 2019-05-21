/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:58 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/21 17:18:20 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	int			number;
	char		*dst_ptr;
	const char	*src_ptr;

	number = n;
	dst_ptr = dst;
	src_ptr = src;
	i = 0;
	if (ft_strlen(dst_ptr) < number)
	{
		ft_putstr("error - destination memory overflow");
		return (dst);
	}
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		if (src_ptr[i] == '\0')
			i = n;
		i++;
	}
	dst = dst_ptr;
	return (dst);
}