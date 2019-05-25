/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:23:25 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/25 09:31:06 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	character;
	size_t			i;
	void			*nlptr;
	const char		*src_ptr;

	src_ptr = s;
	nlptr = NULL;
	character = c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (src_ptr[i] == character)
		{
			nlptr = (void*)&src_ptr[i];
			return (nlptr);
		}
		i--;
	}
	return (nlptr);
}
