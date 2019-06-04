/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:19:39 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/04 12:47:11 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join_str;

	join_str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (join_str == NULL)
		return (NULL);
	ft_memcpy(join_str, s1, ft_strlen(s1));
	ft_memcpy((join_str + ft_strlen(s1)), s2, ft_strlen(s2));
	return (join_str);
}
