/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:26:04 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/10 10:33:34 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' \
			|| c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}
