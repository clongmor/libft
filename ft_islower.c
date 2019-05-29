/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:30:34 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/29 09:38:53 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_islower(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
