/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:10:33 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/29 09:39:36 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isupper(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
