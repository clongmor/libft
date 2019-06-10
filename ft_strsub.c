/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:39:26 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/10 17:04:06 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	sub_str = (char *)malloc((len * 1) + 1);
	if (sub_str == NULL)
		return (NULL);
	while (i < len)
	{
		sub_str[i] = s[i + start];
		i++;
	}
	if (sub_str[i] != '\0')
		sub_str[i] = '\0';
	return (sub_str);
}
