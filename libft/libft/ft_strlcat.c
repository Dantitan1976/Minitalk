/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:37:55 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/02 19:01:08 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	pos_src;
	size_t	pos_dst;

	pos_src = 0;
	pos_dst = 0;
	while (dst[pos_dst] && pos_dst < size)
		pos_dst++;
	while (src[pos_src] && ((pos_src + pos_dst + 1) < size))
	{
		dst[pos_src + pos_dst] = src[pos_src];
		pos_src++;
	}
	if (pos_dst < size)
		dst[pos_dst + pos_src] = '\0';
	return (pos_dst + ft_strlen(src));
}	
