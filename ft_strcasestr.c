/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:46:27 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/12 11:53:35 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcasestr(const char *haystack, const char *needle)
{
	size_t		len;
	char		*haystack2;
	char		*needle2;

	haystack2 = ft_strdup(haystack);
	haystack2 = ft_strlowcase(haystack2);
	needle2 = ft_strdup(needle);
	needle2 = ft_strlowcase(needle2);
	len = ft_strlen(haystack2);
	return (ft_strnstr(haystack2, needle2, len));
}
