/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:32:38 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/06 14:26:20 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlength(int n)
{
	int			count;
	long int	new_int;

	new_int = n;
	count = 0;
	if (new_int < 0)
	{
		new_int *= -1;
		count++;
	}
	while (new_int > 0)
	{
		new_int = new_int / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	int			i;
	char		*str;
	int			neg;
	long int	new_int;

	new_int = n;
	str = ft_strnew(ft_intlength(n));
	i = 0;
	neg = 1;
	if (new_int < 0)
	{
		neg = -1;
		new_int *= -1;
	}
	if (new_int == 0)
		str[0] = '0';
	while (new_int > 0)
	{
		str[i++] = new_int % 10 + '0';
		new_int /= 10;
	}
	if (neg < 0)
		str[i] = '-';
	ft_strrev(str);
	return (str);
}
