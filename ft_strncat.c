/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:42:29 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/24 08:53:47 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcncat(char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = ((size_t)ft_strlen(s1));
	ft_memcpy((s1 + len), s2, n);
	return (s1);
}
