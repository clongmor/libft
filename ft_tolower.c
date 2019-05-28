/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 17:47:03 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/28 17:51:34 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (c < 65 || c > 90)
		return (c);
	if (character >= 'A' && character <= 'Z')
		character = character + 32;
	return (character);
}
