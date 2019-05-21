/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:41:05 by event             #+#    #+#             */
/*   Updated: 2019/05/21 09:15:28 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_memset(void *ptr, int cbyte, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = ptr;
	while (i < len)
	{
		p[i] = cbyte;
		i++;
	}
}
