/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:43:24 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/27 15:18:42 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s1_ptr;
	unsigned const char	*s2_ptr;
	size_t				i;
	int					diff;

	s1_ptr = s1;
	s2_ptr = s2;
	i = 0;
	diff = 0;
	while (s1_ptr[i] == s2_ptr[i] && i < n)
	{
		i++;
	}
	diff = s1_ptr[i] - s2_ptr[i];
	return (diff);
}
