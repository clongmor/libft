/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:15:40 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/10 16:56:06 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	s1_len;
	size_t	s2_len;
	int		diff;

	if (s1 == NULL || s2 == NULL)
		return (0);
	s1_len = ft_strlen(s1) + 1;
	s2_len = ft_strlen(s2) + 1;
	if (s1_len <= s2_len)
	{
		if (s1_len < n)
			n = s1_len;
	}
	else if (s2_len < n)
		n = s2_len;
	diff = (ft_memcmp(s1, s2, n));
	if (diff == 0)
		return (1);
	else
		return (0);
}
