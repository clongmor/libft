/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 17:17:31 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/28 17:45:44 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (c < 97 || c > 122)
		return (c);
	if (character >= 'a' && character <= 'z')
		character = character - 32;
	return (character);
}
