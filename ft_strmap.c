/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:44:29 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/03 18:03:21 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = (char *)malloc(ft_strlen(s));
	if (new_str == NULL)
		return (NULL);
	while (s[i])
	{
		new_str[i] = (*f)((char)(s[i]));
		i++;
	}
	return (new_str);
}
