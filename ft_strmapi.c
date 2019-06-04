/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 08:30:48 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/04 08:36:02 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	i = 0;
	new_str = (char *)malloc(ft_strlen(s));
	if (new_str == NULL)
		return (NULL);
	while (s[i])
	{
		new_str[i] = (*f)(i, (char)s[i]);
		i++;
	}
	return (new_str);
}
