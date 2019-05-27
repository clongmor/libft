/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:42:29 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/27 17:26:48 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	s2_ptr;

	s2_ptr = s2;
	len = ((size_t)ft_strlen(s1));
	ft_memcpy((s1 + len), s2, n);
	if (s1[len + n] != '\0')
		s1[len + n + 1] = '\0';
	return (s1);
}
