/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:33:33 by clongmor          #+#    #+#             */
/*   Updated: 2019/05/29 10:35:04 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isdigit(int c)
{
    unsigned char character;

    character = (unsigned char)c;
    if (c >= 48 && c <= 57 )
        return (1);
    return (0);
}
