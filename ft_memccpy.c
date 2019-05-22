/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:24:45 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/22 10:50:18 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	character;
	size_t			i;
	void			*nlptr;
	char			*dst_ptr;
	const char		*src_ptr;

	dst_ptr = dst;
	src_ptr = src;
	nlptr = NULL;
	character = c;
	i = 0;
	while (i < n)
	{
		ft_memcpy((dst_ptr + i), (src_ptr + i), 1);
		if (src_ptr[i] == character)
		{
			nlptr = (void*)&src_ptr[i + 1];
			return (nlptr);
		}
		i++;
	}
	return (nlptr);
}
