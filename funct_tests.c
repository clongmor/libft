/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:45:33 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/22 13:23:25 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A C program to demonstrate working of memcpy */
#include <stdio.h> 
#include <string.h>
#include "libft.h"

/*int	main () 
{ 
char str1[] = "1234567890"; 
//char str2[] = "12"; 

puts("destination before memcpy "); 
puts(str1); 

 Copies contents of str2 to sr1 
//memcpy ((str1 + 8), str1, 2);
bzero (str1 + 4, 2);
//printf("size of destination str: %lu", sizeof(str1 + 9));
puts("\ndestination after memcpy "); 
printf("%s", str1);
return (0);
}*/ 

int main () 
{
   char str1[15];
   char str2[15];
   int ret;

   ft_memcpy(str1, "", 6);
   ft_memcpy(str2, "", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}
