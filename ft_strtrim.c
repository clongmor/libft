/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:48:57 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/06 12:06:20 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check_wspacef(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == ' ' \
			|| str[i] == '\v' || str[i] == '\f')
		i++;
	return (i);
}

static int		ft_check_wspaceb(char *str)
{
	size_t	i;

	i = ft_strlen(str) - 1;
	while (i > 0 && (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' \
				|| str[i] == ' ' || str[i] == '\v' || str[i] == '\f'))
		i--;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*ws_str;
	size_t	i;
	size_t	start_index;
	size_t	end_index;

	i = 0;
	start_index = ft_check_wspacef((char *)s);
	end_index = ft_check_wspaceb((char *)s);
	ws_str = (char *)malloc(ft_strlen(s));
	if (ws_str == NULL)
		return (NULL);
	i = 0;
	while ((i + start_index) <= (end_index))
	{
		ws_str[i] = s[i + start_index];
		i++;
	}
	ws_str[i] = '\0';
	return (ws_str);
}
