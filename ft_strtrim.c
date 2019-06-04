/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:48:57 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/04 13:48:08 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ws_str;
	size_t	i;
	size_t	len;
	size_t	start_index;
	size_t	end_index;

	i = 0;
	len = ft_strlen(s);
	while (s[i] == " " || s[i] == "\n" || s[i] == "\t")
		i++;
	start_index = i;
	i = len - 1;
	while (s[i] == " " || s[i] == "\n" || s[i] == "\t")
		 i--;
	end_index = i;
	len = end_index - start_index;
	ws_str = (char *)malloc(len);
	if (ws_str == NULL)
		return (NULL);
	i = 0;
	while (len-- > 0 && i++)
	{
		ws_str[i] == s[i + start_index];
	}
	return (ws_str);
}
