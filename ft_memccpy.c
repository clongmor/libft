/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:24:45 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/27 13:34:53 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	character;
	size_t			i;
	void			*nlptr;
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	dst_ptr = (unsigned char*)dst;
	src_ptr = (unsigned char*)src;
	nlptr = NULL;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ft_memcpy((dst_ptr + i), (src_ptr + i), 1);
		if (src_ptr[i] == character)
		{
			nlptr = &dst[i + 1];
			return (nlptr);
		}
		i++;
	}
	return (NULL);
}
