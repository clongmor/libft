/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 08:52:01 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/04 09:09:18 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	int		diff;

	s1_len = ft_strlen(s1) + 1;
	s2_len = ft_strlen(s2) + 1;
	if (s1_len <= s2_len)
		diff = (ft_memcmp(s1, s2, s1_len));
	else
		diff = (ft_memcmp(s1, s2, s2_len));
	if (diff == 0)
		return (1);
	else
		return (0);
}
