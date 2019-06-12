/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 11:15:08 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/12 11:15:56 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlength(int n)
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
