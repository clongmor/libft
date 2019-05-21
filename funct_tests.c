/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:45:33 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/21 14:08:50 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A C program to demonstrate working of memcpy */
#include <stdio.h> 
#include <string.h> 

int	main () 
{ 
char str1[] = "1"; 
char str2[] = "12"; 

puts("destination before memcpy "); 
puts(str1); 

/* Copies contents of str2 to sr1 */
memcpy (str1, str2, 3);
puts("\ndestination after memcpy "); 
printf("%s", str1);
return (0);
} 

