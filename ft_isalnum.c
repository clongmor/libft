/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:37:53 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/29 10:40:56 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	unsigned char character;

	character = (unsigned char)c;
	if (c > 255)
		return (0);
	if (ft_isalpha(character) != 0 || ft_isdigit(character) != 0 )
		return (1);
	return (0);
}
