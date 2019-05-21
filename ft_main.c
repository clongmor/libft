/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:53:43 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/21 13:21:59 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{ 
	char str[50] = "123456";
	/*char str2[ ] = "testing";*/

	/*printf("\nBefore memset(): %s\n", str);  
	ft_memset(str + 13, '.', 8*sizeof(char)); 
	printf("After memset(): %s", str);
	ft_bzero(str + 13, 8*sizeof(char));	
	printf("after bzero(): %s", str);*/
	printf("Source string is: %s", (str));
	printf("\nDestination string is: %s", (str + 3));
	ft_memcpy(str + 3, str, 5);
	printf("\nDestination string after memcpy(): %s", (str));
	return (0);
}
