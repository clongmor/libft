/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 08:30:48 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/10 16:25:17 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (s == NULL || !f)
		return (NULL);
	i = 0;
	new_str = (char *)malloc(ft_strlen(s) + 1);
	if (new_str == NULL)
		return (NULL);
	while (s[i])
	{
		new_str[i] = (*f)(i, (char)s[i]);
		i++;
	}
	if (new_str[i] != '\0')
		new_str[i] = '\0';
	return (new_str);
}
