/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:13:01 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/27 13:24:32 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main () {
   char a[] = "Firststring";
   const char b[]  = "Secondstring";
   //memcpy(a, b, 5);
   printf("New arrays : %s\t%s \n", a, b);
   //ft_memcpy(a, b, 5);
   //printf("New arrays after ft_memcpy: %s\t%s \n", a, b);
   ft_memccpy(a, b, 'S', 5);
   printf("New arrays after ft_memccpy: %s\t%s \n", a, b);
   return 0;
}
