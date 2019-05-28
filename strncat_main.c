/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:27:20 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/28 11:49:11 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main () 
{
	char str[]	= "the cake is a lie !\0I'm hidden lol\r\n";
	char str2[]	= "the cake is a lie !\0I'm hidden lol\r\n";
	//char src[10], dest[10];
	
	char buff[] = "there is no stars in the sky";
	char buff2[] = "there is no stars in the sky";

	printf("Before	buff:	[%s]\n",buff);
	printf("Before  buff2:  [%s]\n\n\n",buff2);
	
	size_t max	= ft_strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t max2	= ft_strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	
	size_t r2 = ft_strlcat(buff2, str2, max2);
	size_t r = ft_strgabbycat(buff, str, max);
	
	printf("After	buff:	[%s] && str	: [%s]	=> r : [%zu]\n",buff,str,r);
	printf("After	buff2:  [%s] && str2	: [%s]	=> r2: [%zu]\n",buff2,str2,r2);





	/*strcpy(src,  "the cake is a lie !\0I'm hidden lol\r\n");
	strcpy(dest, "there is no stars in the sky");
	
	strlcat(dest, src, 40);
	printf("Final destination string : |%s|\n", dest);
	
	strcpy(src,  "the cake is a lie !\0I'm hidden lol\r\n");
	strcpy(dest, "there is no stars in the sky");

	ft_strlcat(dest, src, 40);
	printf("Final destination string : |%s|", dest);
	*/
	return(0);
}
