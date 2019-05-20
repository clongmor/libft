/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:41:05 by event             #+#    #+#             */
/*   Updated: 2019/05/20 11:51:23 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_memset(void *ptr, int cbyte, size_t len)
{
	int				i;
	unsigned char	c;

	c = (unsigned char)cbyte;
	i = 0;
	
	while (i < len)
	{
		*ptr = *(int*)ptr;
		ptr = c;
		ptr = ptr + 1;
		i++;
	}
}

int		main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";

	ft_memset(str + 13, '.', 8*sizeof(char));
	printf("After memset(): %s", str);
	return (0);
}
