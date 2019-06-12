/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:37:02 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/12 11:47:12 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int				i;
	size_t			k;
	void			*nlptr;
	size_t			store;

	i = -1;
	k = 0;
	if (*needle == '\0' || ft_strncmp(needle, "", 1) == 0)
		return ((char*)haystack);
	while (++i < (int)ft_strlen(haystack) && i < (int)len)
	{
		if (haystack[i] != needle[k])
			continue;
		nlptr = (void*)&haystack[i];
		store = i;
		while (haystack[i] == needle[k] && i < (int)len && (k = k + 1))
		{
			i++;
			if (needle[k] == '\0')
				return (nlptr);
		}
		k = 0;
		i = store + 1;
	}
	return (NULL);
}
