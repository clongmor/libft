/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:43:24 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/11 08:19:31 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s1_ptr;
	unsigned const char	*s2_ptr;
	size_t				i;
	int					diff;

	if (s1 == NULL && s2 == NULL)
		return (0);
	s1_ptr = s1;
	s2_ptr = s2;
	i = 0;
	diff = 0;
	while (s1_ptr[i] == s2_ptr[i] && i < n)
	{
		if (i == (n - 1))
			break ;
		i++;
	}
	if (n > 0)
		diff = s1_ptr[i] - s2_ptr[i];
	return (diff);
}
