/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:43:28 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/23 16:03:58 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char*)malloc(ft_strlen(s1) + 1);
	while (i <= (size_t)ft_strlen(s1))
	{
		s2[i] = s1[i];
		i++;
	}
	if (s2[i -1] != '\0')
		s2[i] = '\0';
	free(s2);
	return (s2);
}
