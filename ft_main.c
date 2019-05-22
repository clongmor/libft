/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:53:43 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/22 10:45:00 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{ 
	char str[50] = "1234567890";
	//char str2[ ] = "move";

	printf("\nBefore memset(): %s\n", str);  
	//ft_memset(str + 13, '.', 8*sizeof(char)); 
	//printf("After memset(): %s", str);
	//ft_bzero(str + 4, 2);	
	//printf("after bzero(): %s", str);
	printf("Source string is: %s", (str));
	printf("\nDestination string is: %s", (str + 3));
	//ft_memccpy(str, str2, 'c', 2);
	ft_memmove((str + 3), str, 5);
	//printf("\ncharacter pointed to is: c");
	printf("\nDestination string after memmove(): %s", (str));
	return (0);
}
