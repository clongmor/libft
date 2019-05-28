/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:23:25 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/28 15:22:33 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	character;
	int				i;
	char			*nlptr;
	const char		*src_ptr;

	src_ptr = s;
	nlptr = NULL;
	character = (char)c;
	if (ft_strncmp(s, "", 1) == 0)
		return (nlptr);
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (src_ptr[i] == character)
		{
			nlptr = (char*)&src_ptr[i];
			return (nlptr);
		}
		i--;
	}
	return (nlptr);
}
