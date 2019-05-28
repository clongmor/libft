/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:39:45 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/28 15:07:15 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{

    // initializing variables
    char st[] = "GeeksforGeeks";
    char ch = 'e';
    char* val;

    // Use of strrchr()
    // returns "ks"
    val = strrchr(st, ch);

    printf("String after last %c is :  %s \n", ch, val);

	val = ft_strrchr(st, ch);

    printf("String after last ft_strrchr %c is :  %s \n", ch, val);
    char ch2 = 'm';

    // Use of strrchr()
    // returns null
    // test for null
    val = strrchr(st, ch2);

    printf("String after last %c is :  %s \n", ch2, val);

	val = ft_strrchr(st, ch2);

    printf("String after last ft_strrchr %c is :  %s \n", ch, val);
    return (0);
}
