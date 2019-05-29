/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:14:28 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/29 08:27:09 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (c < 32 || c > 126)
		return (0);
	if (character >= ' ' && character <= '~')
		return (1);
	return (character);
}
