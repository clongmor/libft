/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:02:16 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/29 10:37:38 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	unsigned char character;

	character = (unsigned char)c;
	if (c > 255)
		return (0);
	if (ft_isupper(character) != 0 || ft_islower(character) != 0 )
		return (1);
	return (0);
}
