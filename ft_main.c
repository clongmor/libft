/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:53:43 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/21 10:25:14 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{ 
	char str[50] = "GeeksForGeeks is for programming geeks."; 
	/*printf("\nBefore memset(): %s\n", str);  
	ft_memset(str + 13, '.', 8*sizeof(char)); 
	printf("After memset(): %s", str);*/
	ft_bzero(str + 13, 8*sizeof(char));	
	printf("after bzero(): %s", str);
	return (0);
}
