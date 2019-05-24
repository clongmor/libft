/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:12:50 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/24 09:18:08 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C++ program to find size of an array by writing our 
// sizeof 
//#include <bits/stdc++.h> 
#include "libft.h"
using namespace std; 

// User defined sizeof macro 
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type)) 

int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5, 6}; 
	ft_bzero(arr, 6);
	int size = my_sizeof(arr)/my_sizeof(arr[0]); 

	cout << "Number of elements in arr[] is "
		<< size; 

	return 0; 
} 


