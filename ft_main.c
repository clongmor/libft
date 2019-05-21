/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:53:43 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/21 18:02:10 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{ 
	char str[50] = "123 cac 123";
	char str2[ ] = "testers casting";

	/*printf("\nBefore memset(): %s\n", str);  
	ft_memset(str + 13, '.', 8*sizeof(char)); 
	printf("After memset(): %s", str);
	ft_bzero(str + 13, 8*sizeof(char));	
	printf("after bzero(): %s", str);*/
	printf("Source string is: %s", (str2));
	printf("\nDestination string is: %s", (str));
	ft_memccpy(str, str2, 'c', 11);
	printf("character pointed to is: c");
	printf("\nDestination string after memcpy(): %s", (str));
	return (0);
}
