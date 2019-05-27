/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:37:02 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/27 17:39:23 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*haystack_new;
	size_t	h_len;
	size_t	i;

	h_len = ft_strlen(haystack) + 1;
	i = 0;
	haystack_new = (char*)haystack;
	ft_bzero(haystack_new, h_len);
	while (i < len && haystack[i] != '\0')
	{
		haystack_new[i] = (char)haystack[i];
		i++;
	}
	haystack_new[i] = '\0';
	return (ft_strstr((const char*)haystack_new, needle));

}
