/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:06:50 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/10 10:23:50 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	i;
	size_t	len;

	i = 0;
	if (n < (size_t)(ft_strlen(s1) + 1))
		len = n;
	else
		len = ft_strlen(s1);
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (i < (size_t)len)
	{
		s2[i] = s1[i];
		i++;
	}
	if (s2[i - 1] != '\0')
		s2[i] = '\0';
	return (s2);
}
