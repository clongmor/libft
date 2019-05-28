/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:32:35 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/28 17:28:27 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int				i;
	size_t			k;
	void			*nlptr;

	nlptr = NULL;
	i = -1;
	k = 0;
	if (*needle == '\0' || ft_strncmp(needle, "", 1)  == 0)
		return ((char*)haystack);
	while (++i < ft_strlen(haystack))
	{
		if (haystack[i] == needle[k])
		{
			nlptr = (void*)&haystack[i];
			while (haystack[i++] == needle[k++])
			{
				if (needle[k] == '\0')
					return (nlptr);
			}
			k = 0;
			i = i - (i-1);
		}
	}
	nlptr = NULL;
	return (nlptr);

	/*char	n_first;
	char	*n_first_loc;

	if (needle =='\0' || ft_strncmp(needle, "", 1) == 0)
		return ((char*)haystack);
	n_first = needle[0];
	n_first_loc = ft_strchr(needle, n_first);
	if (n_first_loc == NULL)
		return (NULL);*/

}
