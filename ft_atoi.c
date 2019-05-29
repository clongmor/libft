/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:47:50 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/29 13:23:45 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		neg;

	neg = 1;
	i = 0;
	res = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == ' ' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_isdigit(str[i]) != 0)
	{
		res *= 10;
		res = res +str[i] - '0';
		i++;
	}
	res *= neg;
	return (res);
}
