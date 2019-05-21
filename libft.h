/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:15:35 by event             #+#    #+#             */
/*   Updated: 2019/05/21 12:39:03 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(const char *s);
void	ft_memset(void *ptr, int cbyte, size_t len);
void	ft_bzero(void *s, size_t n);
void*	ft_memcpy(void *dst, const void *src, size_t n);

#endif
